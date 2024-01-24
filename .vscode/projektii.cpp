/*
	Detyra 1.1
	Inicializimi i matrices me vlera permes tastieres dhe llogaritja
	e shumes se anetareve te matrices
*/	
#include <iostream>

using namespace std;

int main() {

	const int nrRreshtave = 2, nrKolonave = 3;
	int matrica[nrRreshtave][nrKolonave] = {};
	int shuma = 0;

	for (int rreshti = 0; rreshti < nrRreshtave; rreshti++)
	{
		for (int kolona = 0; kolona < nrKolonave; kolona++)
		{
			cout << "Matrica[" << rreshti << "][" << kolona << "]: ";
			cin >> matrica[rreshti][kolona];
		}
	}

	int rreshti = 0, kolona = 0;
	while (rreshti < nrRreshtave) {
		kolona = 0;
		while (kolona < nrKolonave) {
			cout << shuma << " + " << matrica[rreshti][kolona];
			shuma = shuma + matrica[rreshti][kolona];
			cout << " = " << shuma << endl;
			kolona++;
		}
		rreshti++;
	}

	cout << "Shuma: " << shuma << endl;

	return 0;
}