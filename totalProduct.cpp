// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: April 2022
// This program calculates the product of consecutive integers

#include <iostream>

int main() {
    // this function calculates the product of consecutive integers
    std::string positiveIntegerAsString;
    int positiveInteger;
    int loopCounter = 1;
    int totalProduct = 1;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> positiveIntegerAsString;

    // process
    try {
        positiveInteger = std::stoi(positiveIntegerAsString);
        if (positiveInteger >= 0) {
            do {
                totalProduct = loopCounter * totalProduct;
                loopCounter = loopCounter + 1;
            } while (loopCounter <= positiveInteger); {
            std::cout << "The product is " << totalProduct << std::endl;
            }
        } else if (positiveInteger < 0) {
        std::cout << "Undefined.\n";
        }
    } catch (std::invalid_argument) {
            std::cout << "That is not an integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
