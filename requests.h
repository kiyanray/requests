#ifndef REQUESTS_H
#define REQUESTS_H

#include <string>

class Requests {
public:
    static std::string get(const std::string& url);
    static std::string post(const std::string& url, const std::string& data);
    static std::string head(const std::string& url);
};

#endif
