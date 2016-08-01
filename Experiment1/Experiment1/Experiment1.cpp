// Experiment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char stop; 
	float fHuge = 1.0e30f; // valid single precision
	cout << fHuge << endl;
	fHuge *= 1.0e38f; // result = infinity
	cout << fHuge << endl;
	fHuge /= 1.0e38f; // ????
	cout << fHuge << endl;
	cin >> stop;
    return 0;
}