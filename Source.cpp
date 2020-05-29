#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int x[5], i;

	for (i = 0; i <= 4; i++)
	{
		cout << "Masukkan Nilai " << i + 1 << " : ";
		cin >> x[i];
	}

	cout << endl;

	for (i = 0; i <= 4; i++)
	{
		cout << "Nilai ke-" << i + 1 << "\t= " << x[i] << endl;
	}

	cout << endl;
	
	_getch();
	return 0;
}