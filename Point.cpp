#include "Point.h"

Point Point::operator+(Point other)
{
    return Point(this->x + other.getX(), this->x + other.getY(), this->z + other.getZ());
}

Point Point::operator-(Point other)
{
    return Point(this->x - other.getX(), this->x - other.getY(), this->z - other.getZ());
}

Point Point::operator*(Point other)
{
    return Point(this->x * other.getX(), this->x * other.getY(), this->z * other.getZ());
}

Point Point::operator/(Point other)
{
    return Point(this->x / other.getX(), this->x / other.getY(), this->z / other.getZ());
}
