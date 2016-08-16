
#include "stdafx.h"
#include "Vector3.h"

using namespace std;

void printVector(Vector3 *vector) {
	cout << vector->GetX() << " " << vector->GetY() << " " << vector->GetZ() << endl;
}

int main() {
	char trash;
	Vector3 teste(0.0f, 10.0f, 20.0f), zero(0,0,0), one(1.0f, 1.0f, 1.0f),
		i(1,0,0),j(0,1,0),k(0,0,1);

	printVector(&teste);
	printVector(&zero);
	teste = zero;
	printVector(&teste);
	teste = teste + 5*i + k*2;
	printVector(&teste);

	cin >> trash;

}