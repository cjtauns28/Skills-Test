#include <iostream>

#include <conio.h>

using namespace std; 

int main ()

{

	double payrate, hpw, incomeb, incomea, mc, mss, msb, msp;

	

	cout << "Pay rate per hour" << endl;

	cin >> payrate;

	cout << "Input Number of hours per week" << endl;

	cin >> hpw;

	cout << "Income before taxes is:"  << 5 * hpw *payrate << endl;

	cout << "Income after taxes is:" << 5 * hpw *payrate - (5 * hpw *payrate * 0.14)  << endl;

	cout << "Money spent on clothes:" <<(5 * hpw *payrate * 0.14 * .1) << endl; 

	cout << "Money spent on school supplies:" <<(5 * hpw *payrate * 0.14 * .01) << endl;

	cout << "Money spent on savings bonds:" << (5 * hpw *payrate * 0.14 * .25) << endl;

	cout << "Money spent by parents to buy additional saving bonds: " << (5 * hpw *payrate * 0.14 * .25 * 0.5) << endl;

	_getch();

	return 0;

}