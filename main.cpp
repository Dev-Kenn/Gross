#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string firstnm ="Juan ";
	string lastnm = "Dela Cruz\n";
	int hrs = 40;
	float rate = 215.75;
	float gross;
	string fullnm = firstnm + lastnm;
	
	cout <<fullnm;
	gross = hrs * rate;
	cout <<"40 hrs \n";
	cout << "215.75 \n";
	cout <<"Gross pay: "<< gross;
	return 0;
}
