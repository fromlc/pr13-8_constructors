//----------------------------------------------------------------------
// Rectangle.h : Gaddis 9E Rectangle version 4, pp. 759-761
// 
// Specification (declaration) file for the Rectangle class.
// This version has a constructor.
// 
// Author: Tony Gaddis
//----------------------------------------------------------------------
#ifndef RECTANGLE_H     // include guard, alternative to #pragma once
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double length;

public:
    // constructors
    Rectangle();                 // Default Constructor
    Rectangle(double, double);   // Constructor
    
    // setters
    bool setWidth(double);
    bool setLength(double);
      
    // getters
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

#endif // RECTANGLE_H (end include guard)