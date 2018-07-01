#pragma once
#include <string>
#include <sstream>
#include "Square.h"

namespace Drawing
{
	struct Coordinate
	{
		int x;
		int y;
		std::stringstream ToStream()
		{
			// write obj to stream
			std::stringstream os;
			os << x << "\n" << y ;
			return os;
		}
	};


	class Shape
	{
	public:
		Coordinate center;
		char character;
		std::string name;
		int parameter;

	
		std::stringstream toStream()
		{
			// write obj to stream
			std::stringstream os;
			os <<center.ToStream().str() << "\n" << parameter << "\n" << character << "\n" << name << "\n";
			return os;
		}

		void fromStream(std::stringstream &data)
		{
			data >> center.x >> center.y >> parameter >> character >> name;
			shapeRecognition();
		}

		void shapeRecognition(void)
		{
			if (!(name.compare("Square")))
			{
				Square s;
				s.getSide(parameter);
				s.drawSquare(character, center.x, center.y);
			}
			else if (!(name.compare("Circle")))
				std::cout << name << "\n";
			else if (!(name.compare("Rectangle")))
				std::cout << name << "\n";
			else if (!(name.compare("Triangle")))
				std::cout << name << "\n";


		};

		int setParameter()
		{
			return parameter;
		}
	};
}