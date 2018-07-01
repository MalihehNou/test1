#pragma once
#include <string>
#include <sstream>

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
			os << x << "\n" << y << "\n";
			return os;
		}
	};


	class Shape
	{
	public:
		Coordinate center;
		char character;
		std::string name;


		std::stringstream toStream()
		{
			// write obj to stream
			std::stringstream os;
			os <<center.ToStream().str() << "\n" << character << "\n" << name << "\n";
			return os;
		}

		void fromStream(std::stringstream &data)
		{
			data >> center.x >> center.y >> character >> name;

		}
	};
}