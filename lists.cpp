// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Oct 2021
// This program calculates the average percentage

#include <iostream>
#include <string>
#include <list>

float marksAverage(std::list<int> theMarks) {
    // This function creates a list

    float subTotal = 0;
    int finalTotal = 0;

    // process
    for (float loopNumberSecond : theMarks) {
        subTotal += loopNumberSecond;
    }

    subTotal = subTotal / theMarks.size();
    finalTotal = subTotal + 0.5;

    return finalTotal;
}

int main() {
    // This function accepts a list
    std::list<int> myList;
    int finalAnswer;

    std::string userInputString;
    int userInputInteger = 0;

    // heading
    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << "" << std::endl;

    while (userInputInteger != -1) {
        // input
        std::cout << "What is your mark? (as %): ";
        std::cin >> userInputString;
        try {
            userInputInteger = std::stoi(userInputString);
            myList.push_back(userInputInteger);
        } catch (std::invalid_argument) {
            std::cout << "\nInvalid input, try again." << std::endl;
            std::cout << "" << std::endl;
        }
    }

    // remove -1
    myList.pop_back();

    // call functions
    finalAnswer = marksAverage(myList);

    // output
    std::cout << "" << std::endl;
    std::cout << "The average is: " <<finalAnswer << "%" << std::endl;

    std::cout << "\nDone." << std::endl;
}
