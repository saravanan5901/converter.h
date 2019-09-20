#include <Python.h>

int main()
{
  Py_Initialize();
  PyRun_SimpleString("import requests, json\n"
					 "api_key = '9d75b71d988c8e1bf6ef48a4d1d902cb'\n"
					 "base_url = 'http://api.openweathermap.org/data/2.5/weather?'\n"
					 "city_name = input('Enter city name : ')\n"
					 "complete_url = base_url + 'appid=' + api_key + '&q=' + city_name\n" 
					 "response = requests.get(complete_url)\n"
					 "x = response.json()\n"
					 "if x['cod'] != '404':\n"
					 "\ty = x['main'] \n"
					 "\tcurrent_temperature = y['temp']\n\tcurrent_pressure = y['pressure']\n\tcurrent_humidity = y['humidity']\n\tz = x['weather']\n"
					 "\tweather_description = z[0]['description']\n" 
					 "\tprint(''' Weather Description : ''' + str(weather_description) + '''\n Temperature(in K) : ''' + str(current_temperature) +'''\n Atmospheric Pressure :''' + str(current_pressure) + '''\n Humidity :''' + str(current_humidity))\n"
					 "else:\n"
					 "\tprint('City Not Found')\n");
  Py_FinalizeEx();
  return 0;
}
  