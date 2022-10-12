// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Oct 2022
// This program calculates the sum of two integers

#include <iomanip>
#include <iostream>

int main() {
    // This function calculates the sum of two integers
    float num1;
    float num2;
    float total;

    // Input
    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    // Process
    total = num1 + num2;

    // Output
    std::cout << "The sum of your numbers is: " << std::fixed
    << std::setprecision(2) << total << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
