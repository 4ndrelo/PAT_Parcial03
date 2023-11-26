#pragma once

#include <string>
#include <vector>
#include <map>

using std::string;

class TimeMap
{
public:
    TimeMap();

    void set(string key, string value, int timestamp);

    string get(string key, int timestamp);

    std::map<string, std::vector<std::pair<string, int>>> store;
};