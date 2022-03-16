#pragma once
#include <iostream>

using namespace std;

class Tile
{
private:
	int coord[2];

public:
	virtual ~Tile() = default;
	virtual void draw() = 0;
	virtual void use() = 0;

	void setCoord(int x, int y)
	{
		coord[0] = x;
		coord[1] = y;
	}

	void showCoord()
	{
		cout << "[" << coord[0] << "," << coord[1] << "]";
	}
};

class OrdinaryTile : public Tile
{
public:
	void draw()
	{
		cout << "OrT";
	}
	void use() {};
};

class TNTTile : public Tile
{
public:
	void draw()
	{
		cout << "TNT";
	}
	void use()
	{
		cout << "TNT is exploded \n";
	}
};

class RocketTile : public Tile
{
public:
	void draw()
	{
		cout << "Roc";
	}
	void use()
	{
		cout << "Rocket is exploded \n";
	}
};

class RubicTile : public Tile
{
public:
	void draw()
	{
		cout << "RubT";
	}
	void use()
	{
		cout << "Rubic is exploded \n";
	}
};