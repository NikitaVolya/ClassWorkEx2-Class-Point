#pragma once
class Point
{
private:
	float x, y, z;
public:
	Point(float x, float y, float z) : x(x), y(y), z(z) {};

	float getX() { return this->x; };
	float getY() { return this->y; };
	float getZ() { return this->z; };

	void setX(float x) { this->x = x; };
	void setY(float y) { this->y = y; };
	void setZ(float z) { this->x = z; };

	Point operator+(Point other);
	Point operator-(Point other);
	Point operator*(Point other);
	Point operator/(Point other);
};

