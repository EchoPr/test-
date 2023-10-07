#include <iostream>
#include "vector2d.h"


Vector2D operator+ (const Vector2D& rhs, const Vector2D& lhs){
    return Vector2D{rhs.x + lhs.x, rhs.y + lhs.y};
}

Vector2D operator+ (const Vector2D& rhs, const Vector2D& lhs){
    return Vector2D{rhs.x + lhs.x, rhs.y + lhs.y};
}


Vector2D& Vector2D::operator+= (const Vector2D& other){
    x += other.x;
    y += other.y;
    return *this;
}


std::ostream& operator<<(std::ostream& os, const Vector2D& v){
    os << "Vector2D (" << v.x << ", " << v.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Vector2D& v){
    is >> v.x >> v.y;
    return is;
}
