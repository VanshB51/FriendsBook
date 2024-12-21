/*
* Circle.cpp
*
* Description: This class models a rectangle ...
* Class Invariant: ???
*
* Author:
* Creation date:
*/

#include <iostream>       // As you need to print data
#include "Circle.h"    // The header file for the class - you need this!

using std::cout;          // The implementation of this class uses the object cout
using std::endl;          // and the object endl


// Default constructor
// Note: This part of the constructor's header " : width(1), height(1)"
//Circle::Circle() : x(0), y(0), radius(10.0) { }
Circle::Circle(int x, int y , double radius) {
    this->x = 0;
    this-> y = 0;
    this->radius = 10.0;
}


// Parameterized constructor
// Description: Create a new rectangle with the given values.
Circle::Circle(int x, int y, double r){

    this->x = x;
    this->y = y;

if (r>0.0){
    this->radius = r;

}else{
    this->radius = 10;
}

}

int Circle :: getX() const {
return x;
}

int Circle :: getY() const {
return y;
}

double Circle :: getRadius() const{
return radius;
}


void Circle:: move(int horiz, int vert){
x = horiz;
y = vert;
}

void Circle :: setRadius(double r){
if(r>0.0)
    radius = r;
else{
    radius = 0;
}
}


double Circle::computeArea() const {
return M_PI*(pow(radius,2));
}

void Circle:: displayCircle() const{
    cout<<"x:" <<x<< '\n';
    cout<<"y:" <<y<< '\n';
    cout<<"radius:" <<radius<< '\n';
}

bool Circle:: intersect(Circle c) const{
double d = sqrt(pow(c.getX()-x,2)+pow(c.getY()-y,2));
if(d == 0){
cout<<"both circles are the same\n";
return true;
}
if(d>(c.getRadius() + radius)){
    cout<<"The circles are separate\n";
return false;
}
if(d< abs(radius - c.getRadius())){
 cout<<"One circle is contained within the other\n";
 return false;
}
if(d<(c.getRadius() + radius)){
cout<<"Two intersection points\n";
 return true;
}

}



