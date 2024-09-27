#include <iostream>
#include <string>
#include <vector>
#include <memory>

int main() {

    std::vector<std::unique_ptr<std::string>> vec;

    vec.push_back(std::make_unique<std::string>("ABC"));
    vec.push_back(std::make_unique<std::string>("DEF"));
    vec.push_back(std::make_unique<std::string>("GHI"));

    auto uptr1 = std::make_unique<std::string>("UVW");
    vec.push_back(std::move(uptr1));
    auto uptr2 = std::make_unique<std::string>("XYZ");
    vec.push_back(std::move(uptr2));

    for(const auto& ptr : vec) {
        std::cout << *ptr << std::endl;
    }
    return 0;
}