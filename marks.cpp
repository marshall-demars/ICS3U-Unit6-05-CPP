// Copyright (c) 2023 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Jan 2023
// This program calculates the average mark

#include <iostream>
#include <list>

float findsTheAverage(std::list<float> marks) {
    // This function finds the average

    float average;
    int element;
    float total = 0;

    for (auto element : marks) {
        total += element;
    }
    average = total / marks.size();

    return average;
}

int main() {
    // This function makes the list

    float average;
    float tempInt;
    std::list<float> marks;
    std::string tempNumber = "";
    std::list<std::string> reversedWords;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << "" << std::endl;

    while (tempNumber != "-1") {
        try {
            std::cout << "What is your mark (as %): ";
            std::cin >> tempNumber;
            tempInt = stof(tempNumber);
            if (tempInt <= 100 & tempInt >= 0) {
                marks.push_back(tempInt);
            } else if (tempInt == -1) {
                average = findsTheAverage(marks);
                std::cout << "\nThe average is " << average << "%" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "\nInvalid input." << std::endl;
            continue;
        }
    }

    std::cout << "\nDone." << std::endl;
}
