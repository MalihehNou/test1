#pragma once
#include <iostream>

class Square
{
public:
	int side;
	
	void getSide(int s)
	{
		side = s;

	}
	
	

	void drawSquare(char character, int center_x , int center_y)
	{

		int i = 0;
		int j = 0;

		for (i = 0; i < (center_y - (side / 2)); i++)
			std::cout << "\n ";

		for (int i = 1; i < (center_x - (side / 2)); i++)
			std::cout << " ";

		for (i = 0; i < side; i++)
			std::cout << character << " ";


		for (j = 0; j < side - 2; j++)
		{
			std::cout << "\n";
			for (i = 0; i < (center_x - (side / 2)); i++)
				std::cout << " ";
			std::cout << character;

			for (i = 0; i < side - 2; i++)
				std::cout << "  ";

			std::cout << " " << character;
		}
		std::cout << "\n" ;


		for (i = 0; i < (center_x - (side / 2)); i++)
			std::cout << " ";

		for (i = 0; i < side; i++)
			std::cout << character << " ";
	};



};
