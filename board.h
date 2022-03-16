#pragma once
#include "TilesFac.h"
#define xlength 10
#define ylength 10

class Board
{
private:
	Tile* array[xlength][ylength];
	TileFactory tilefactory;

public:
	Board()
	{
		for (int i = 0; i < xlength; i++)
		{
			for (int j = 0; j < ylength; j++)
			{
				if ((j + 1 + i) % 2 == 0)
				{
					array[i][j] = tilefactory.getTile("Rocket");
				}
				else {
					array[i][j] = tilefactory.getTile("TNT");
				}
			}
		}
	}

	void CreateBoard()
	{
		cout << "=== WELCOME TO TOYBLAST GAME === " << endl;
		for (int i = 0; i < xlength; i++)
		{
			cout << "||";
			for (int j = 0; j < ylength; j++)
			{
				if (array[i][j] != NULL)
					array[i][j]->draw();
				cout << "||";
			}
			cout << endl;
		}
	}
	void use(int x, int y)
	{
		array[x][y]->use();
		array[x][y] = NULL;
	}
};