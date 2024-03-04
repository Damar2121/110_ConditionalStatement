


#include <iostream>
using namespace std;

int main()
{
	srand(time(0));

	int nbilA, nbilB;
	string status;

	nbilA = rand() % 11;
	nbilB = rand() % 11;

	if (nbilA == nbilB) {
		status = "bilangannya sama";
	}
	else if (nbilA > nbilB) {
		status = "bilangan A lebih besar dari bilangan B";
	}
	else
	{
		status = "bilangan A lebih kecil dari bilangan B";
	}
	
	cout << "bilangan A = " << nbilA << endl;
	cout << "bilangan B = " << nbilB << endl;
	cout << "status bilangan = " << status << endl;

}


