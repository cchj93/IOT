import os
import requests

#os.system('clear')

def get_data():
    print("solar system information")
    url="https://api.le-systeme-solaire.net/rest/bodies/?filter%5B%5D=isComet"

    try:

        res = requests.get(url)
        res.raise_for_status()
        
        #covert answer to jason

        data = res.json()
        print(data)

    except requests.exceptions.RequestException as e:
        print(f"API error:{e}")



get_data()
