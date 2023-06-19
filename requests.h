#ifndef HTTP_CLIENT_H
#define HTTP_CLIENT_H

#include <string>

class HTTPClient {
public:
    static std::string get(const std::string& url);
};

#endif
