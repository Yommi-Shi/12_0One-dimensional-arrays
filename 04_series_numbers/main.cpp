#include <iostream>


int main() {
    std::cout << "===Series of numbers===" << std::endl;

    int numbers[15];
    int size = 15;
    int repeat_sum = 0;
    int sum = 0;

    std::cout << "Enter a set of 15 consecutive numbers and one number from the series is repeated:" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }

    int x = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < x) {
            x = numbers[i];
        }
    }

    int max_number = x + size - 1;

    for (int i = 0; i < size; i++) {
        repeat_sum += numbers[i];
        sum += x;
        x++;
    }

    std::cout << "Repeating number: " << max_number - (sum - repeat_sum);

}