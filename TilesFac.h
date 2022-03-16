#pragma once
#include "tile.h"

class TileFactory
{
public:
	Tile* getTile(string type)
	{
		if (type == "ORDINARY")
		{
			return new OrdinaryTile();
		}

		else if (type == "TNT")
		{
			return new TNTTile();
		}

		else if (type == "Rocket")
		{
			return new RocketTile();
		}

		else if (type == "Rubic")
		{
			return new RubicTile();
		}
	}
};