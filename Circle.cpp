/* 
Name: Sana Khan
Period: 2
Project: Circle
Description: Calculate area and circumference of a circle
*/

#include <iostream>
#include <iomanip>

int main()
{
	double radius, circumference, area;
		std::cout << "Enter radius: ";
		std::cin >> radius;
		std::cout << "Radius: " << radius;
		std::cout << std::setprecision(2) << std::fixed;
		area = (3.14 * radius) * radius;
		circumference = 3.14 * (radius * 2);
		std::cout << "\nFor a circle of radius " << radius << ", the area of the circle is " << area << " and the circumference is " << circumference << "\n";
		
    return 0;
}

