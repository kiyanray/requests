#include <iostream>
#include "requests.h"

int main() {
    std::string url = "https://api.example.com/data";
    std::string response = HTTPClient::post(url, "key1=value1&key2=value2");

    if (!response.empty()) {
        // Process the response
        std::cout << "Response: " << response << std::endl;
    } else {
        std::cout << "Request failed" << std::endl;
    }

    return 0;
}
