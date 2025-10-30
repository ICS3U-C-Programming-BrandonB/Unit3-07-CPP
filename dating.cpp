// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : October 30th, 2025
// This program asks the user for their age, then determines if they can date the grandfather's grandchild.

#include <iostream>
#include <random>
#include <string>

int main() {
    // declare integer to hold random number

    int userAge;

    // get the age from the user as a string
    std::string userAgeAsString;

    std::cout << "Enter Your Age: ";
    std::cin >> userAgeAsString;

    int userAgeAsInt;

    try {
        // convert the user's age to an int

        userAgeAsInt = std::stoi(userAgeAsString);

        // check if the age is within the dating range

        // determine whether or the user can date the grandchild
        if (userAgeAsInt >=25 && userAgeAsInt <=40) {
            std::cout << "You can date my grandchild" << userAgeAsInt
            << " years old" << std::endl;
        } else {
            std::cout << "You cannot date my grandchild as you are: "
            << userAgeAsInt << " years old" << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userAgeAsString << " is not an integer.\n";
    }
}
