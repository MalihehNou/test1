#pragma once
#include <iostream>

class Square
{
public:
	int side=3;
	int center;
	char character = '.';

	void drawSquare()
	{
		for (int i = 0; i < side; i++)
			std::cout << character << "\r";
		for (int i = 0; i < side; i++)
			std::cout << "\n" << character;
		    
	};



};
