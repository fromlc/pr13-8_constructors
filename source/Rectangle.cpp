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

using std::cout;

//***********************************************************
// The constructor accepts arguments for width and length.
// 
// Instructor's note: to be consistent with setLength() 
// and setWidth(), this constructor should not accept
// negative values.
//***********************************************************

Rectangle::Rectangle() {
	width = 25;
	length = 35;
}

//***********************************************************
// The constructor accepts arguments for width and length.
// 
// Instructor's note: to be consistent with setLength() 
// and setWidth(), this constructor should not accept
// negative values.
//***********************************************************

Rectangle::Rectangle(double w, double len) {
	width = w;
	length = len;
}

//***********************************************************
// setWidth sets the value of the member variable width.
//***********************************************************

void Rectangle::setWidth(double w) {
	if (w >= 0)
		width = w;
	else {
		cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}

//***********************************************************
// setLength sets the value of the member variable length.
// 
// Instructor's note: setLength() should not exit. Instead,
// it should either:
//	1) return false and let the app handle the problem, or
//  2) set length to the absolute value of len.
//***********************************************************

void Rectangle::setLength(double len) {
	if (len >= 0)
		length = len;
	else {
		cout << "Invalid length\n";
		exit(EXIT_FAILURE);
	}
}