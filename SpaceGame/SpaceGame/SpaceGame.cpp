// SpaceGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <random>
#include <map>
#include <iomanip>
#include <string>


#define TEN3 1000
#define TEN6 (TEN3*TEN3)
#define TEN9 (TEN6*TEN3)
#define TEN12 (TEN6*TEN6)
#define TEN15 (TEN12*TEN3)
#define TEN18 (TEN12*TEN6)
#define TEN21 (TEN12*TEN9)
#define TEN24 (TEN12*TEN12)

#include "generation.h"


using namespace std;


void tester()
{

	int type = 1;
	int pos = 0;
	float mass = 0;

	int a = generateResourses(type, pos, mass);

	
	system("pause");
}

void main()
{

	//Skall skickas in till funktionen
	int ID = 1;
	
	srand(time(NULL));

	//tester();
	int i = 0;
	
	//int *abb = teasing();
	i = 0;
	int *arr = generateSystem();
	while (i < 30) {
		cout << arr[i] <<" ";
		i++;
	}
	//cout << "\n" << arr[2];
	//cout << "\n" << arr[3];
	//cout << "\n" << arr[2];
	//cout << "\n" << arr[3] << "\n";
	cout << "\n";
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


