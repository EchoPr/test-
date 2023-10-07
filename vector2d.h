#pragma once
#include <iostream>

struct Vector2D{
    double x{0.};
    double y{0.};

    Vector2D() = default;
    Vector2D(double x_, double y_):x{x_}, y{y_}{};

    Vector2D& operator+= (const Vector2D&);
    Vector2D& operator-= (const Vector2D&);

    Vector2D& operator== (const Vector2D&);
    Vector2D& operator!= (const Vector2D&);

    double length();
};


Vector2D operator+ (const Vector2D&, const Vector2D&);
Vector2D operator- (const Vector2D&, const Vector2D&);

std::ostream& operator<< (std::ostream&, const Vector2D&);
std::istream& operator>> (std::istream&, Vector2D&);
