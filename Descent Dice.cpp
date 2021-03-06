// Descent Dice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class Hero {
public:
	string name;
	int move, health, stamina, defense[3];
	int attribute[4], attack[4];
};

int rollBrown(int d_dice);
int rollSilver(int d_dice);
int rollBlack(int d_dice);
int rollBlue(int d_dice);
int rollRed(int d_dice);
int rollYellow(int d_dice);
int rollGreen(int d_dice);

int main()
{
	Hero alys_raine;

	alys_raine.name = "Alys Raine";
	alys_raine.move = 4;
	alys_raine.health = 12;
	alys_raine.stamina = 4;
	alys_raine.defense[0] = 0;
	alys_raine.defense[1] = 1;
	alys_raine.defense[2] = 0;
	alys_raine.attribute[0] = 3;
	alys_raine.attribute[1] = 4;
	alys_raine.attribute[2] = 3;
	alys_raine.attribute[3] = 1;
	alys_raine.attack[0] = 1;
	alys_raine.attack[1] = 0;
	alys_raine.attack[2] = 2;
	alys_raine.attack[3] = 0;

	int sTotal = 0;
	int hTotal = 0;
	hTotal += rollBlue(alys_raine.attack[0]);
	hTotal += rollRed(alys_raine.attack[1]);
	hTotal += rollYellow(alys_raine.attack[2]);
	hTotal += rollGreen(alys_raine.attack[3]);
	cout << endl << "Attack = " << hTotal << endl;
	sTotal += rollBrown(alys_raine.defense[0]);
	sTotal += rollSilver(alys_raine.defense[1]);
	sTotal += rollBlack(alys_raine.defense[2]);
	cout << endl << "Defense = " << sTotal << endl << endl;
	if (0 >= hTotal - sTotal)
		cout << alys_raine.name << " suffers no damage.";
	else
		cout << alys_raine.name << " suffers " << hTotal - sTotal << " damage." << endl << endl;
	system("PAUSE");
	return 0;
}

int rollBrown(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int shields = 0;
	int sTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int brown = rand() % 6 + 1;
		switch (brown)
		{
		case 1:
			shields = 0; break;
		case 2:
			shields = 0; break;
		case 3:
			shields = 0; break;
		case 4:
			shields = 1; break;
		case 5:
			shields = 1; break;
		case 6:
			shields = 2; break;
		};
		SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | 0); cout << shields;
		SetConsoleTextAttribute(h, 0); cout << " ";
		sTotal += shields;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return sTotal;
}

int rollSilver(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int shields = 0;
	int sTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int silver = rand() % 6 + 1;
		switch (silver)
		{
		case 1:
			shields = 0; break;
		case 2:
			shields = 1; break;
		case 3:
			shields = 1; break;
		case 4:
			shields = 1; break;
		case 5:
			shields = 2; break;
		case 6:
			shields = 3; break;
		};
		SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE); cout << shields;
		SetConsoleTextAttribute(h, 0); cout << " ";
		sTotal += shields;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return sTotal;
}

int rollBlack(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int shields = 0;
	int sTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int black = rand() % 6 + 1;
		switch (black)
		{
		case 1:
			shields = 0; break;
		case 2:
			shields = 2; break;
		case 3:
			shields = 2; break;
		case 4:
			shields = 2; break;
		case 5:
			shields = 3; break;
		case 6:
			shields = 4; break;
		};
		SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); cout << shields;
		SetConsoleTextAttribute(h, 0); cout << " ";
		sTotal += shields;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return sTotal;
}

int rollBlue(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int hearts = 0;
	int hTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int blue = rand() % 6 + 1;
		switch (blue)
		{
		case 1:
			hearts = 0; break;
		case 2:
			hearts = 2; break;
		case 3:
			hearts = 2; break;
		case 4:
			hearts = 2; break;
		case 5:
			hearts = 1; break;
		case 6:
			hearts = 1; break;
		};
		SetConsoleTextAttribute(h, BACKGROUND_BLUE | BACKGROUND_INTENSITY); cout << hearts;
		SetConsoleTextAttribute(h, 0); cout << " ";
		hTotal += hearts;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return hTotal;
}

int rollRed(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int hearts = 0;
	int hTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int red = rand() % 6 + 1;
		switch (red)
		{
		case 1:
			hearts = 1; break;
		case 2:
			hearts = 2; break;
		case 3:
			hearts = 2; break;
		case 4:
			hearts = 2; break;
		case 5:
			hearts = 3; break;
		case 6:
			hearts = 3; break;
		};
		SetConsoleTextAttribute(h, BACKGROUND_RED); cout << hearts;
		SetConsoleTextAttribute(h, 0); cout << " ";
		hTotal += hearts;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return hTotal;
}

int rollYellow(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int hearts = 0;
	int hTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int yellow = rand() % 6 + 1;
		switch (yellow)
		{
		case 1:
			hearts = 0; break;
		case 2:
			hearts = 1; break;
		case 3:
			hearts = 1; break;
		case 4:
			hearts = 1; break;
		case 5:
			hearts = 2; break;
		case 6:
			hearts = 2; break;
		};
		SetConsoleTextAttribute(h, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY); cout << hearts;
		SetConsoleTextAttribute(h, 0); cout << " ";
		hTotal += hearts;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return hTotal;
}

int rollGreen(int d_dice)
{
	srand(time(NULL));
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	int hearts = 0;
	int hTotal = 0;
	for (int x = 0; x < d_dice; x++)
	{
		int green = rand() % 6 + 1;
		switch (green)
		{
		case 1:
			hearts = 1; break;
		case 2:
			hearts = 0; break;
		case 3:
			hearts = 0; break;
		case 4:
			hearts = 1; break;
		case 5:
			hearts = 1; break;
		case 6:
			hearts = 1; break;
		};
		SetConsoleTextAttribute(h, BACKGROUND_GREEN); cout << hearts;
		SetConsoleTextAttribute(h, 0); cout << " ";
		hTotal += hearts;
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return hTotal;
}
