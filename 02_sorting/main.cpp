#include <iostream>


void reverse_quick_sort(float num[], int left, int right) {
    if (left > right) {
        return;
    }
    float p = num[(left + right) / 2];
    int i = left;
    int j = right;
    while (i <= j) {
        while (num[i] > p) {
            i++;
        }
        while (num[j] < p) {
            j--;
        }

        if (i <= j) {
            float temp = num[i];
            num[i] = num[j];
            num[j] = temp;
            i++;
            j--;
        }
    }
    reverse_quick_sort(num, left, j);
    reverse_quick_sort(num, i, right);
}


int main() {
    std::cout << "===Sorting===" << std::endl;

    int size = 15;
    float num[size];

    std::cout << "Enter 15 floating point numbers" << std::endl;

    for (int i = 0; i < size; i++) {
        std::cin >> num[i];
    }

    std::cout << std::endl;

    reverse_quick_sort(num, 0, size - 1);

    std::cout << "Reverse sorted array" << std::endl;

    for (float n : num) {
        std::cout << n << " ";
    }

}
