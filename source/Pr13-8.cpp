//----------------------------------------------------------------------
// Pr13-8.cpp : Gaddis 9E Rectangle version 4, pp. 759-761
// 
// This program calls the Rectangle class constructor.
// 
// Author: Tony Gaddis
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>

#include "Rectangle.h"

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
	// To hold the room width and length
	double houseWidth, houseLength; 

	// Get the width of the house.
	cout << "In feet, how wide is your house? ";
	cin >> houseWidth;

	// Get the length of the house.
	cout << "In feet, how long is your house? ";
	cin >> houseLength;

	// Create a Rectangle object.
	Rectangle house(houseWidth, houseLength);

	// Display the house's width, length, and area.
	cout << setprecision(2) << fixed;
	cout << "The house is " << house.getWidth()
		<< " feet wide.\n";
	cout << "The house is " << house.getLength()
		<< " feet long.\n";
	cout << "The house has " << house.getArea()
		<< " square feet of area.\n";

	return 0;
}