#include <cassert>
#include <iostream>


float travelTime(float distance, float speed) {
    assert(speed > 0);
    return  distance / speed;
}

int main() {
    std::cout << "===Using assert===" << std::endl;

    std::cout << "Input distance:" << std::endl;
    float distance;
    std::cin >> distance;

    std::cout << "Input speed:" << std::endl;
    float speed;
    std::cin >> speed;

    std::cout << "Travel time: " << travelTime(distance, speed);
}