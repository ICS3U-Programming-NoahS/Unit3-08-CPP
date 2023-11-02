// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 1st, 2023
// This program asks the user to enter a year
// then tells the user if it is a leap year
#include <iostream>

int main() {
    // Declare variables
    int yearInt;
    std::string yearString;

    // Get the year
    std::cout << "Enter a year: ";
    std::cin >> yearString;

    try {
        // convert the year to an int
        yearInt = std::stoi(yearString);

        // Check if the year is a leap year
        if (yearInt < 0) {
            std::cout << yearInt << " is not a valid year." << std::endl;
        } else {
            if (yearInt % 4 == 0) {
                if (yearInt % 100 == 0) {
                    if (yearInt % 400 == 0) {
                        std::cout << yearInt;
std::cout << " is a leap year." << std::endl;
                    } else {
                        std::cout << yearInt;
std::cout << " is not a leap year." << std::endl;
                    }
                } else {
                    std::cout << yearInt << " is a leap year." << std::endl;
                }
            } else {
                std::cout << yearInt << " is not a leap year." << std::endl;
            }
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << yearString << " is not an integer!" << std::endl;
    }
}
