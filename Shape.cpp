#include "Shape.h"
using namespace std;

// Конструкторы и методы Show для каждого из классов

Square::Square(int x, int y, int side) : x(x), y(y), side(side) {}
void Square::Show() const
{
    cout << "Square at (" << x << ", " << y << ") with side " << side << endl;
}

//
Rectangle::Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}
void Rectangle::Show() const
{
    cout << "Rectangle at (" << x << ", " << y << ") with width " << width << " and height " << height << endl;
}

//
Circle::Circle(int x, int y, int radius) : x(x), y(y), radius(radius) {}
void Circle::Show() const
{
    cout << "Circle at (" << x << ", " << y << ") with radius " << radius << endl;
}

//
Elipse::Elipse(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}
void Elipse::Show() const
{
    cout << "Ellipse at (" << x << ", " << y << ") with width " << width << " and height " << height << endl;
}



