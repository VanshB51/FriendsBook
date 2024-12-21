/*
* Circle.h
*
* Description: This class models a circle ...
* Class Invariant: ???
*
* Author:
* Creation date:
*/

#include <iostream>
#include<cmath>
using std::cout;


class Circle {

private: 
int x;
int y;
double radius;


public:
// default constructor
Circle();

// Parameterized constructor
// Description: Create a new circle with the given values.
Circle(int x, int y, double radius);

//getter functions
int getX() const;
int getY() const;
double getRadius() const;

void move(int horiz, int vert);  //moves the circle to the new given location (horiz,vert) (therefore changing its x and y member attributes to the given horiz and vert parameter values, respectively)
void setRadius(double r);// - changes the circle's radius to r, or to 10.0 if r is invalid

double computeArea() const; //- computes and returns the circle's area

void displayCircle() const; //- displays the circle's member attributes like this: x = 0, y = 11, radius = 0.2

bool intersect(Circle c) const; //- returns true if c intersects the calling circle

};