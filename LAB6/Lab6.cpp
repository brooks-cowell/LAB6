#include "Lab6.h"
#include <string>
#include<iostream>


std::string BinarytoDecimal::validateNumber_trailingpaces(std::string BN)
{
	if (!BN.empty() && BN.back() == ' ') {
		BN.erase(BN.find_last_not_of(' ') + 1);

		return BN; // Return the modified string
	}
	else {
		return BN;
	}
}

std::string BinarytoDecimal::validateNumber_leadingspaces(std::string BN)
{
	
	if ( BN[0] == ' ') {
		BN.erase(0, BN.find_first_not_of(' ')); // Erase leading spaces
	}
	else {
		return BN; // No leading spaces
	}
	return BN;
}

std::string BinarytoDecimal::CheckNumber(const std::string BN)
{
	//bool validnum;
	for (int i = 0; i < size(BN) - 1; i++) {
		if (BN[i] == '1' || BN[i] == '0') {
			bool validnum = true;
		}
		else
		{
			//bool validnum = false;
		return "Invalid";
		break;
	    }
	}
	return "Valid";
	
}

int BinarytoDecimal::DecimalValue(const std::string BN)
{
	int power = 0;
	int  value = 0; 
	int decimal = 0; 

	for (int i = size(BN) - 1; i >= 0; i--) {
		 
		if (BN[i] == '1') {
			decimal = pow(2, power);
			power = power + 1;
		}
		else {
			decimal = 0;
			power = power + 1;
		}

		value = value + decimal; 
	}
	return value;
}
