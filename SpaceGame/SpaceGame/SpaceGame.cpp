// SpaceGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <random>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <math.h> 
using namespace std;


float normaldist(int type)
{
	float nordis = 0, u = 0;
	for (int i = 0; i < 10; i++) {
		u = ((rand() % 101) / 500.0);
		nordis = nordis + u;
	}

	return nordis;
}

float planetrot()
{
	float planetRotation, f;
	planetRotation = normaldist(1);
	f = rand() % 4 + 4;

	planetRotation = planetRotation*1.1;

	cout << planetRotation << "\n";
	cout << f << "\n";

	planetRotation = pow(planetRotation, f);
	cout << planetRotation << "\n";
	return planetRotation;
}

int* generateSystem()
{
	int u = 0, i = 0, objectsInSpace = 0, a[30] = {};

	//Genererar föremål
	objectsInSpace = rand() % 15 + 1;
	cout << "Objects: " << objectsInSpace << "\n";
	while (objectsInSpace > 0) {


		//Rocky Planets
		while ((objectsInSpace > 0) && (i < 30)) {
			u = rand() % 100 + 1;
			if (a[i] != 0) {

			}
			else if (i <= 10) {
				if (u <= 10) {
					a[i] = 1;
					objectsInSpace--;
				}
			}
			else {
				if (u <= 2) {
					a[i] = 1;
					objectsInSpace--;
				}
			}
			i++;
		}

		i = 0;

		//Gas Planets
		while ((objectsInSpace > 0) && (i < 30)) {
			u = rand() % 100 + 1;

			if (a[i] != 0) {

			}
			else if (i <= 10) {
				if (u <= 1) {
					a[i] = 2;
					objectsInSpace--;
				}
			}
			else {
				if (u <= 5) {
					a[i] = 2;
					objectsInSpace--;
				}
			}
			i++;
		}

		i = 0;

		//Asteroids
		while ((objectsInSpace > 0) && (i < 30)) {
			u = rand() % 100 + 1;

			if (a[i] != 0) {

			}
			else if (i <= 7) {
				if (u <= 2) {
					a[i] = 3;
					objectsInSpace--;
				}
			}
			else if (i <= 11) {
				if (u <= 10) {
					a[i] = 3;
					objectsInSpace--;
				}
			}
			else if (i <= 23) {
				if (u <= 5) {
					a[i] = 3;
					objectsInSpace--;
				}
			}
			else {
				if (u <= 15) {
					a[i] = 3;
					objectsInSpace--;
				}
			}
			i++;
		}

		i = 0;
	}
	cout << "\n";
	i = 0;
	while (i < 30) {
		cout << a[i] << " ";
		i++;
	}

	i = 0;
	return a;
}

float generateSystemObject(int obj)
{
	int u = 0;
	if (obj == 1)
	{
		float sta[12];
		sta[0] =
			sta[0] = (rand() % 1000 + 1) / 100; //ger massa
												//atmosphere

	}
	return 0;
}

void main()
{
	//Skall skickas in till funktionen
	int ID = 1;
	srand(time(NULL));

	int *arr = generateSystem();


	cout << "\n" << arr[2] << "\n";

	system("pause");
}






/*
if (u < 31)
{
a[i] = 0;	// ringen får inget tilldelat
}
else if (i < 6)	//de inre ringarna
{
if ((30 < u)&& (u < 41))	//den får asteroidfält
a[i] = 3;
else if ((40 < u) && (u < 46))	//5% gasplnet
a[i] = 2;
else
a[i] = 1;	//planet
}
else if (i < 11)	//mellanringarna
{
if (i < 8)	// de inre mellanreingarna
{
if ((40 < u) && (u < 51))
a[i] = 3;		//10% asteroid
else if ((50 < u) && (u < 56))	//5% gasplnet
a[i] = 2;
else if (55 < u)
a[i] = 1;		//45% planet
}
if (i > 7)	//de yttre mellanringarna
{
if ((40 < u) && (u < 71))
a[i] = 3;		//30% asteroid
else if ((70 < u) && (u < 76))	//5% gasplnet
a[i] = 2;
else if (75 < u)
a[i] = 1;		//25% planet
}
}
else if (i > 10)	// yttre ringarna
{
if (i < 12)		// inre yttre ringarna
{
if ((60 < u) && (u < 91))	//30% asteroid
a[i] = 3;
else if ((90 < u) && (u < 96)) //5% gasplanet
a[i] = 2;
else if (95 < u )	//5% planet
a[i] = 1;
}
if (11 < i < 24)		// de mellersta yttre ringarna
{
if ((60 < u) && (u < 71))	//10% asteroid
a[i] = 3;
else if ((70 < u) && (u < 96)) //25% gasplanet
a[i] = 2;
else if (95 < u)	//5% planet
a[i] = 1;
}
if (i > 23)		// de yttersta yttre ringarna
{
if ((60 < u) && (u < 91))	//30% asteroid
a[i] = 3;
else if ((90 < u) && (u < 96)) //5% gasplanet
a[i] = 2;
else if (95 < u)	//10% planet
a[i] = 1;
}
}
i++;
*/


