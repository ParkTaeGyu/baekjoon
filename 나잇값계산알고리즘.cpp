#include <iostream>
using namespace std;

struct member{
	int age;
	char name;
};


int main(void){

	int N;
	cin >> N;
	struct member *ps;
	struct member temp[1];

	ps = (struct member *)malloc(sizeof(struct member)*N);

	for (int i = 0; i < N; i++){
		cin >> ps[i].age >> ps[i].name; 
	}
	for (int i = 0; i < N - 2; i++){
	for (int i = 0; i < N-1; i++){
		if (ps[i].age > ps[i + 1].age){
			temp[0] = ps[i];
			ps[i]= ps[i + 1];
			ps[i + 1] = temp[0];
		}
	
	}
	}

	for (int i = 0; i < N; i++){
		cout << ps[i].age << " " << ps[i].name << endl;
	}
}