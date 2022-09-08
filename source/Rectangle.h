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
    Rectangle();                 // Default Constructor
    Rectangle(double, double);   // Constructor
    
    void setWidth(double);
    void setLength(double);
      
    // Instructor's note: these getters belong in Rectangle.cpp
    double getWidth() const { return width; }

    double getLength() const { return length; }

    double getArea() const { return width * length; }
};

#endif // RECTANGLE_H