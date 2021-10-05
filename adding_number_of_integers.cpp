// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user to pick a number of integers
// and sums all of those integers

#include <iostream>


int main() {
    // this function loops a sum of inputted positive integers
    // and eliminates the negatives from the sum if the user enters
    // a negative integer

    std::string userNumber;
    int userNumberInt;
    std::string enterInteger;
    int enterIntegerInt;
    // int integerSum;
    int sum = 0;

    // input
    std::cout << "Enter in the number of integers to add: ";
    std::cin >> userNumber;
    std::cout << std::endl;

    // process & output
    try {
        userNumberInt = std::stoi(userNumber);
        for (int integerSum = 0; integerSum < userNumberInt; integerSum++) {
            std::cout << "Enter in integer: ";
            std::cin >> enterInteger;
            std::cout << std::endl;
            enterIntegerInt = std::stoi(enterInteger);

            if (enterIntegerInt < 0) {
                continue;
            }
            sum = sum + enterIntegerInt;
        }
        std::cout << "The sum is " << sum << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid response.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
