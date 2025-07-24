#include <iostream>
#include <string>


int main() {
    std::cout << "===Apartment building===" << std::endl;

    std::cout << "Enter 10 surname" << std::endl;
    std::string surname[10];

    for (int i = 0; i < 10; i++) {
        std::cin >> surname[i];
    }

    std::cout << "Enter three apartment numbers" << std::endl;

    int number;
    for (int i = 0; i < 3; i++) {
        std::cin >> number;
        if (number > 10 || number <= 0) {
            std::cout << "Incorrect input.Apartment number from 1 to 10" << std::endl;
        } else {
            std::cout << surname[number - 1] << std::endl;
        }
    }
}