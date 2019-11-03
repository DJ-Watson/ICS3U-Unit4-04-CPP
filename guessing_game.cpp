// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: October 2019
// this program is a guessing game where the user has to guess a number
// that the system has in memory


#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>


int main() {
    // variables
    std::string numinput;
    srand(time(NULL));
    const int NUMBER = rand()%9+1;
    int numcheck;
    int loopc = 0;

    // input
    std::cout << "guess the number I am thinking of : ";
    std::cin >> numinput;
    std::cout << "" << std::endl;

    // process
    for (loopc = 0; loopc < 5; loopc++) {
        try {
            numcheck = std::stoi(numinput);
            if (numcheck == NUMBER) {
                std::cout << "Correct! ";
                break;
            } else {
                std::cout << "Incorrect! ";
                if (loopc == 4) {
                    break;
                } else {
                    std::cout << "try again: ";
                    std::cin >> numinput;
                    std::cout << "" << std::endl;
                }
            }
        } catch (std::invalid_argument) {
            std::cout << "invalid input";
        }
    }
    std::cout << "the answer was: " << NUMBER;
}
