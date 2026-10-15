// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 10/15/26
// This program generates a random number and asks the user to guess it.

#include <iostream>
#include <random>


int main() {
    // Setting the necessary variables
    int generatedNum;
    int guessedNum;

    // Creating the needed number generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());

    std::uniform_int_distribution<int> idist(0, 9);

    // Assigning a random generated number to the generatedNum variable
    generatedNum = idist(rgen);

    // Asks the user to guess a number between 0-9.
    // And assigns the input to guessedNum variable
    std::cout << "Guess a number in the range of 0-9: ";
    std::cin >> guessedNum;

    // Checks if the guessed number from the
    // user is the correct number that was generated
    if (guessedNum == generatedNum) {
        // If it is then tell the user that they guessed correctly
        std::cout << "You guessed correctly!\n";

     } else {
        // If it is then tell the user that they guessed incorrectly,
        // and display the generated correct number
        std::cout << "You guessed incorrectly!\n";
        std::cout << "The correct number was: " << generatedNum << "\n";
    }
}
