#include <iostream>
#include "requests.h"

int main() {
    std::string url = "https://api.example.com/data";
    std::string response = HTTPClient::get(url);

    if (!response.empty()) {       
        std::cout << "Response: " << response << std::endl;
    } else {
        std::cout << "Request failed" << std::endl;
    }

    return 0;
}
