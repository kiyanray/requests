#ifndef HTTP_CLIENT_H
#define HTTP_CLIENT_H

#include <string>

class HTTPClient
{
public:
    static std::string get(const std::string &url);
    static std::string post(const std::string &url, const std::string &data);
};

#endif
