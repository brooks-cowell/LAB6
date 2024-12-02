#ifndef LAB6_H
#define LAB_H
#include <string>

class BinarytoDecimal {
public:
	//erases leading or trailing spaces
	std::string validateNumber_trailingpaces(std::string BN);
	std::string validateNumber_leadingspaces( std::string BN);

	//Checking for valid digits
	std::string CheckNumber(const std::string BN);

	//Converter
	int DecimalValue(const std::string BN);

private:

};


#endif 