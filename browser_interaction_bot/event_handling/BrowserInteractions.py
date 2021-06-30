from selenium.webdriver import Chrome
from selenium.common.exceptions import NoSuchWindowException, UnexpectedAlertPresentException
from time import sleep, time
from .config import MAX_PAGE_LOAD_TIME, SCROLL_BOTTOM_TIME, SCROLL_TOP_TIME, SCREENSHOT_WAIT_TIME, PAGE_LOAD_BUFFER_TIME, PAGE_RETRY_WAIT_TIME


class BrowserInteractions:
    @classmethod
    def open_page(cls, browser: Chrome, url: str, retry_count: int = 0) -> str:
        try:
            browser.get(url)
            cls.wait_for_page_load(browser)
        except UnexpectedAlertPresentException:
            pass
        except Exception as e:
            if retry_count < 5:
                print("Retrying page load, error occurred", e)
                cls.wait(PAGE_RETRY_WAIT_TIME)
                return cls.open_page(browser, url, retry_count+1)
            else:
                raise e
        return browser.current_url

    @classmethod
    def wait_for_page_load(cls, browser: Chrome) -> None:
        start_time = time()
        load_state = browser.execute_script("return document.readyState")
        while load_state != "complete" and time() - start_time < MAX_PAGE_LOAD_TIME:
            load_state = browser.execute_script("return document.readyState")
        cls.wait(PAGE_LOAD_BUFFER_TIME)

    @classmethod
    def scroll_to_top(cls, browser: Chrome):
        browser.execute_script("window.scrollTo(0, 0)")
        cls.wait(SCROLL_TOP_TIME)

    @classmethod
    def scroll_to_bottom(cls, browser: Chrome):
        js = 'return Math.max( document.body.scrollHeight, document.body.offsetHeight,  ' \
             'document.documentElement.clientHeight,  document.documentElement.scrollHeight,  ' \
             'document.documentElement.offsetHeight); '
        scroll_height = browser.execute_script(js)
        offset = 0
        while offset < scroll_height:
            browser.execute_script("window.scrollTo(0, %s);" % offset)
            cls.wait(SCROLL_BOTTOM_TIME)
            offset += browser.get_window_size()['height']*1/3

    @classmethod
    def close_extraneous_tabs(cls, browser: Chrome, limit: int):
        if len(browser.window_handles) < limit:
            return
        else:
            try:
                original_handle = browser.current_window_handle
                for handle in browser.window_handles:
                    if handle != original_handle:
                        browser.switch_to.window(handle)
                        browser.close()
                browser.switch_to.window(original_handle)
            except NoSuchWindowException:
                print("Window already closed")

    @classmethod
    def screenshot(cls, browser: Chrome, file_name: str):
        cls.wait(SCREENSHOT_WAIT_TIME)
        browser.save_screenshot(file_name+".png")

    @staticmethod
    def wait(seconds: int) -> None:
        sleep(seconds)