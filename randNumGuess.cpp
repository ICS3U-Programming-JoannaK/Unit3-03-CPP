// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 21, 2025
// This program generate a new random
// number every time the program
// is started over and asks user to guess
// what the number is

#include <iostream>
#include <cstdlib>

int main() {
    // declare variables
    int correctGuess;
    int userGuess;

    // initialize random seed
    srand((unsigned)time(NULL));

    // generate a random number between 1 and 100
    correctGuess = rand_r() % 100 + 1;

    // ask user for their guess
    std::cout << "Enter your guess: ";
    std::cin >> userGuess;

    // check if the user guess is correct
    if (userGuess == correctGuess) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong. The correct guess was: "
                     << correctGuess << std::endl;
    }
}
