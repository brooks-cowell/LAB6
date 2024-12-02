/*
Brooks D Cowell
Computer Science Fall 2024
Due: December 3 2024
Lab 6, Lab 6 Binary to Decimal Conversion
This lab is a Binary to decimal converter.
*/

#include <iostream>
#include "Lab6.h"
#include <fstream>
#include <string>


int main() {
   
    //Checking for valid input file
    std::ifstream inputFile("BinaryIn.dat");
    if (!inputFile)
    {
        std::cerr << "Error opening file.\n";
        return 1;
    }

   //Variable to store the binary number. 
    std::string binaryNumber;

    //Object "converter" from BinarytoDecimal class
    BinarytoDecimal converter;

    //Priming read ommitted
  
    //Precondition: None
    //Postcondition: Output to screen binary digit and decimal value. 
    while (std::getline(inputFile, binaryNumber))
    {
        //validate Binary numbers that have leading or trailing spaces.
        binaryNumber = converter.validateNumber_trailingpaces(binaryNumber);
        binaryNumber = converter.validateNumber_leadingspaces(binaryNumber);

       
        if (converter.CheckNumber(binaryNumber) == "Valid") {
            int decimal = converter.DecimalValue(binaryNumber);

            std::cout << "Binary Number: " << binaryNumber << " ----> " << "Decimal Value: " 
                << decimal << std::endl;
        }
        else {
            std::cout << "Bad digit on the input\n";
        }

    }

   inputFile.close();
   return 0;
}