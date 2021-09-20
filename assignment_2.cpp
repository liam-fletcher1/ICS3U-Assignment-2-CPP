// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program calculates the area of a triangle
// with user input of base and height

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area of a triangle
    int base;
    int height;
    int areaOfTriangle;

    // input
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> base;

    // input
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> height;

    // process
    areaOfTriangle = 0.5 * base * height;

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << areaOfTriangle << " cm²." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
