#include <iostream>
using namespace std;

int a, b;
int max (int a, int b);

int main () {
	cout <<"Hasilnya adalah :" << max ( 20,15 );
	return 0;
}
int max (int a, int b){
	if (a > b){
		return a;
	}
	else {
	return b;
	}
}
