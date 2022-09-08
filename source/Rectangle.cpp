//----------------------------------------------------------------------
// Pr13-8.cpp : Gaddis 9E Rectangle version 4, pp. 759-761
// 
// Implementation (definition) file for the Rectangle class.
// This version has a constructor that accepts arguments.
// 
// Author: Tony Gaddis
//----------------------------------------------------------------------
#include "Rectangle.h"   // Needed for the Rectangle class

#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function

constexpr double DEFAULT_WIDTH = 10.0;
constexpr double DEFAULT_LENGTH = 15.0;

//***********************************************************
// Default constructor sets default width and length.
//***********************************************************

Rectangle::Rectangle() : width(DEFAULT_WIDTH), length(DEFAULT_WIDTH) {}

//***********************************************************
// The constructor accepts arguments for width and length.
// 
// To be consistent with setLength() and setWidth(),
// this constructor uses the absolute values of paramters.
//***********************************************************

Rectangle::Rectangle(double w, double len) {
	w >= 0 ? width = w : width = -w;
	len >= 0 ? length = len : length = -len;
}

//***********************************************************
// setWidth sets the value of the member variable width.
// 
// To be consistent with the constructor and setLength(),
// this function uses the absolute value of its parameter.
// 
// Returns
//		- false when parameter value is negative,
//		- true otherwise
//***********************************************************

bool Rectangle::setWidth(double w) {
	if (w >= 0) {
		width = w;
		return true;
	}

	width = -w;
	return false;
}

//void Rectangle::setWidth(double w) {
//	if (w >= 0)
//		width = w;
//	else {
//		cout << "Invalid width\n";
//		exit(EXIT_FAILURE);
//	}
//}

//***********************************************************
// setLength sets the value of the member variable length.
// 
// To be consistent with the constructor and setWidth(),
// this function uses the absolute value of its parameter.
// 
// Returns
//		- false when parameter value is negative,
//		- true otherwise
//***********************************************************

bool Rectangle::setLength(double len) {
	if (len >= 0) {
		length = len;
		return true;
	}

	length = -len;
	return false;
}

//void Rectangle::setLength(double len) {
//	if (len >= 0)
//		length = len;
//	else {
//		cout << "Invalid length\n";
//		exit(EXIT_FAILURE);
//	}
//}

//***********************************************************
// getWidth returns the value of the member variable width.
//***********************************************************

double Rectangle::getWidth() const { return width; }

//***********************************************************
// getLength returns the value of the member variable length.
//***********************************************************

double Rectangle::getLength() const { return length; }

//***********************************************************
// getArea returns the area of the rectangle.
//***********************************************************

double Rectangle::getArea() const { return width * length; }
