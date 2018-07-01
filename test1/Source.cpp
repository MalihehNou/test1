#include <iostream>
#include "Shape.h"
#include <fstream>
#include <string>
#include <sstream>
#include "Square.h"
int a = 0;

int main()
{

	Drawing::Shape c;
	c.center.x = 1;
	c.center.y = 2;
	c.character = '-';
	c.name = "Rectangle";
	std::cout << c.toStream().str();
	std::ofstream ofile("Hey.txt");
	ofile << c.toStream().str();
	ofile.close();
	
	std::ifstream ifile("Hey.txt");
	std::string str;
	ifile >> str;
	std::stringstream data;
	data << str;
	c.fromStream(data);
	
	std::cout << "x: " << c.center.x << "\n" << "y: " << c.center.y << "\n" << "Character: " << c.character << "\n" << "Name: " << c.name << "\n";

	Square s;
	s.drawSquare();

	std::cin >> a;


	
	
}