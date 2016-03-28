#include <iostream>
#include <math.h>
using namespace std;

double cald(int x1, int y1, int x2, int y2){
	double d;
	d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	return d;
}

int pandan(double d, double r1, double r2){
	if (d == 0 && r1 == r2) return -1;
	if (d == (r1 + r2))  return 1;
	if (d > (r1 + r2))  return 0;
	if (d < (r1 + r2)){
		if (r1 >(d + r2)) return 0;
		if (r2 > (d + r1)) return 0;
		if (r1 == (d + r2)) return 1;
		if (r2 == (d + r1))  return 1;
		return 2;
	}

}


struct wichi{
	int xpos;
	int ypos;
	int rlength;
};

int main(void){
	
	int T;
	cin >> T;
	
	struct wichi *component1;
	struct wichi *component2;

	component1 = (struct wichi *)malloc(sizeof(struct wichi)*T);
	component2 = (struct wichi *)malloc(sizeof(struct wichi)*T);

	for (int i = 0; i < T; i++){
	cin >> component1[i].xpos >> component1[i].ypos >> component1[i].rlength >> component2[i].xpos >> component2[i].ypos >> component2[i].rlength;
	if (component1[i].xpos <= -10000 || component1[i].xpos >= 10000 && component2[i].xpos <= -10000 || component2[i].ypos >= 10000) break;
	}
		
	for (int i = 0; i < T; i++){
	cout<<pandan(cald(component1[i].xpos, component1[i].ypos, component2[i].xpos, component2[i].ypos),component1[i].rlength,component2[i].rlength)<<endl;
	}

}
