

#include "stdafx.h"
#include <ctime>;

using namespace std;

float TestFunction(float fValue)
{
	return fValue;
}

int main()
{
	int i;
	float fTest;
	time_t  before, after;
	// Start "normal" timer here
	time(&before);
	for (i = 0; i < 100000000; i++)
	{
		// 1.0e-36f is normalized in single precision
		fTest = TestFunction(1.0e-36f);
	}
	// End "normal" timer here
	after = time(NULL);

	cout << difftime(after, before) << " SECONDS" << endl;

	// Start "denormal" timer here
	before = time(NULL);
	for (i = 0; i < 100000000; i++)
	{
		// 1.0e-40f is denormalized in single precision
		fTest = TestFunction(1.0e-40f);
	}
	// End "denormal" timer here
	time(&after);
	cout << difftime(after, before) << " SECONDS" << endl;
	char stop;
	cin >> stop;
	return 0;
}