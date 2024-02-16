/**
 * @file main.cpp
 * @brief A simple program to calculate the square of a number.
 */

#include <iostream>

/**
 * @brief Calculates the square of a number.
 * @param num The number whose square is to be calculated.
 * @return The square of the input number.
 */
int square(int num) {
    return num * num;
}

/**
 * @brief Main function to demonstrate the square function.
 * @return 0 on successful execution.
 */
int main() {
    // Input number
    int number = 5;

    // Calculate the square of the number
    int result = square(number);

    // Output the result
    std::cout << "The square of " << number << " is: " << result << std::endl;

    return 0;
}
