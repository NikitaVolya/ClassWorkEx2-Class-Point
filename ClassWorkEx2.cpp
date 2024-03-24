
#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point a = Point(5, 2, 3);
	Point b = Point(1, 0, 5);
	Point c = a + b;
	
	cout << c.getX() << " | " << c.getY() << " | " << c.getZ() << std::endl;
}