/*
	Detyra 1.1
	Kerkimi i nje vlere brenda vargut
*/
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 7;
	int A[gjatesiaVargut] = {};

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}

	cout << "Vargu A = ["; 
	int i = 0;
	while (i < gjatesiaVargut) {
		if (i < gjatesiaVargut - 1) {
			cout << A[i] << ", ";
		}
		else {
			cout << A[i] << "]" << endl;
		}

		i++;
	}

	int numri;
	bool gjendet = false;
	cout << "Shenoni nje numer: ";
	cin >> numri;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Numri " << numri << " po krahasohet me numrin " << A[i] << endl;
		if (A[i] == numri) {
			cout << "Numri i dhene gjendet brenda vargut ne poziten " << i << endl;
			gjendet = true;
			break;
		}
	}

	if (!gjendet) {
		cout << "Numri i dhene nuk gjendet brenda vargut" << endl;
	}

	return 0;
}
