#include <iostream>
#include <math.h>
using namespace std;

double cald(int x1, int y1, int x2, int y2){
	double d;
	d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return d;
}

int main(void){
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << cald(x1, y1, x2, y2);
}