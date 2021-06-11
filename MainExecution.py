from DataStore import DataStore
from LogParser import LogParser
from browser_interaction_bot.ChromeExecution import ChromeExecution
from browser_interaction_bot.event_handling.DefaultEventHandler import DefaultEventHandler


def execute(db_details: dict, site: str, proxy_url: str) -> None:
    data_store = DataStore(site, db_details)
    data_store.persist_updated_files()
    chrome_execution = ChromeExecution(site, DefaultEventHandler(), proxy_url=proxy_url)
    try:
        chrome_execution.execute()
        used_function_id_map = LogParser.parse_logs(chrome_execution.logs, data_store.request_url_content_file_map)
        data_store.remove_unused_functions(used_function_id_map)
        data_store.persist_updated_files()
    except:
        chrome_execution.close_tools()