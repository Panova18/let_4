#include <iostream>

struct ModilePhone {
    double weight;
    bool is_broken;
    double price;
};

int main() {
    size_t length;
    std::cin >> length;

    ModilePhone array[length];

    for (size_t i = 0; i < length; ++i) {
        double w;
        bool b;
        double t;
        std::cin >> w >> b >> t;
        array[i] = ModilePhone{w, b, t};
    }
    std::cout << "<ModilePhone>" << std::endl;
    for (size_t i = 0; i < length; ++i) {
        std::cout << "\t<MobilePhone id=\"" << i << "\" weight=\"" << array[i].weight;
        std::cout << "\" is_broken=\"" << std::boolalpha << array[i].is_broken << std::noboolalpha;
        std::cout << "\" price=\"" << array[i].price << "\"/>" << std::endl;
    }
    std::cout << "</ModilePhone>" << std::endl;
    return 0;

}
