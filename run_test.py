import sys
import time
from DataStore import DataStore
from LogParser import LogParser
from browser_interaction_bot.ChromeExecution import ChromeExecution
from browser_interaction_bot.event_handling.DefaultEventHandler import DefaultEventHandler
from MainExecution import execute

db_details = {
    "database": "deadcode",
    "password": "password",
    "cache_directory": "/Users/tofunmi/Documents/Lacuna/proxies/data",
    "port": 3306
}

try:
    site = "https://trello.com/"
    output_file_directory = "outputs/" + site.replace("/","_")
    start = time.time()
    execute(site, db_details, proxy_url="127.0.0.1:9345", output_file_directory=output_file_directory)
    end = time.time()

except Exception as e:
    print(e)

