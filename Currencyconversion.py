import requests


def con(from_curr,to_curr)
    url="https://www.mycurrencytransfer.com/api/current/"+str(from_curr)+"/"+str(to_curr)
    req=requests.get(url)
    return req.json().get("data").get("rate")
