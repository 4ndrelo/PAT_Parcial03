#include "Ejercicio03.h"

TimeMap::TimeMap()
{
}

void TimeMap::set(string key, string value, int timestamp)
{
    if (store.find(key) == store.end())
    {
        store[key] = std::vector<std::pair<std::string, int>>();
    }
    store[key].push_back(std::make_pair(value, timestamp));
}

string TimeMap::get(string key, int timestamp)
{
    string res = "";
    if (store.find(key) != store.end())
    {
        const std::vector<std::pair<std::string, int>>& values = store[key];

        for (int i = values.size() - 1; i >= 0; i--)
        {
            if (values[i].second <= timestamp)
            {
                res = values[i].first;
                break;
            }
        }
    }
    return res;
}