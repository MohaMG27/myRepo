#include <iostream>
#include <map>

int main()
{

    std::map<std::string, std::string> myMap {
        {"iPhone", "Too Pricy"}, {"Samsung", " Good"},
        {"Huawi", "Sigma"}     , {"Other", "NaN"}
    };

    std::cout << myMap["iPhone"] << "\n";
}
