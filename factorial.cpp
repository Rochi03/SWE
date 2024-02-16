/**
 * @file factorial.cpp
 * @brief A simple program to calculate the factorial of a number.
 */

#include <iostream>

/**
 * @brief Calculates the factorial of a given number.
 * @param n The number whose factorial is to be calcu
 * @return The factorial of the input number.
 */
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int main() {
    // Input number
    int number = 5;

    // Calculate the factorial of the number
    unsigned long long result = factorial(number);

    // Output the result
    std::cout << "The factorial of " << number << " is: " << result << std::endl;

    return 0;
}
