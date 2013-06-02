#include <iostream>
#include <math.h>

#include "float_tricks.h"

using namespace std;

int main(int argc, char **argv) {
	
	double y = 0.;
	//for(double x=-500.; x<100.; x+=0.00001) {
		//y += fptricks::fast_exp_approx(x);
	//	y += exp(x);
		//cout << fptricks::fast_exp_approx(x) << "  " << exp(x) << endl;
	//}
	
	for(int i=0; i<1000000000; i++) {
		y += fptricks::fast_exp_approx(0.1234);
		//y += exp(0.1234);
	}
	
	cout << y << endl;
	
	cout << fptricks::fast_exp_approx(-100000.) << endl;
	cout << exp(-1000.) << endl;
	
	return 0;
}
