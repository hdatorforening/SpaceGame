
#include "stdafx.h"
#include <math.h> 
#include <cmath>
#include <iostream>
#include <random>
#include <time.h>

#include "NumberFunctions.h"

#define TEN3 1000
#define TEN6 (TEN3*TEN3)
#define TEN9 (TEN6*TEN3)
#define TEN12 (TEN6*TEN6)
#define TEN24 (TEN12*TEN12)

using namespace std;


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

	return a;
}

float generateSystemObject(int obj)
{
	int u = 0;
	if (obj == 1)
	{
		float sta[12];
		sta[0] = (rand() % 1000 + 1) / 100; //ger massa
		sta[0] = sta[0] * (5.97237 * TEN24);	//definerar den efter jorden
		sta[1] = 0.0001 * sta[0];	//
		sta[0] = sta[0] - sta[1];
		sta[2] = planetrot();
		sta malloc
	}
	return ;
}

//Generate resourses, 1 = Stone Planet, 2 = Gas Planet, 3 = Asteroid, 4 = Moon
int generateResourses(int type, int pos, float mass)
{

	/*
	0 - Metal
	1 - Rare Earth
	2 - Water
	*/
	float res[3];
	int total = 0;


	//Stone PLanets
	if (type == 1) {
		res[0] = 9000000 * (rand() % 1 + 0.5);
		res[1] = 1000000 * (rand() % 1 + 0.5);
		res[2] = 500 * (rand() % 20 - 10);
		if (res[2] < 0)
			res[2] = 0;
	}

	//Gas Planets
	else if (type == 2) {

	}

	//Asteroids
	else if (type == 3) {
		if (pos <= 10) {
			res[0] = 800 * (rand() % 1 + 0.5);
			res[1] = 100 * (rand() % 1 + 0.5);
			res[2] = 100 * (rand() % 12 - 10);
			if (res[2] < 0)
				res[2] = 0;
		}else{
			res[0] = 900 * (rand() % 1 + 0.5);
			res[1] = 100 * (rand() % 1 + 0.5);
			res[2] = 500 * (rand() % 1 + 0.5);
		}
	}

	//Moons
	else if (type == 4) {
		int moontype = (rand() % 2 + 1);


	}

	for (int i = 0; i < 3; i++) {
		total += res[i];

		cout << total << ", ";
	}

	


	return -1;
}

float planetrot()
{
	float planrot, f;
	planrot = normaldist(1);
	f = rand() % 4 + 4;

	planrot = planrot*1.1;

	cout << planrot << "\n";
	cout << f << "\n";

	planrot = pow(planrot, f);
	cout << planrot << "\n";
	return planrot;
}
