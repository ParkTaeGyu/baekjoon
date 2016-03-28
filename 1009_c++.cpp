#include<iostream>
using namespace std;

int main(void){

	int T = 0;
	int test_case=0;
	cin >> T;
	int *a;
	int *b;
	int temp;
	a = new int[T];
	b = new int[T];

	while (1)
	{

		if (test_case == T){
			break;
		}
		else{
			cin >> a[test_case] >> b[test_case];
			if ((a[test_case]>=1 && a[test_case] <100)&& (b[test_case] >= 1 && b[test_case] < 1000000)) test_case++;
		}

	}

	for (int i = 0; i < T; i++){
		temp = 1;
		for (int j = 0; j < b[i]; j++){
			temp = temp * a[i];
			if (temp > 10) {
				temp = temp % 10;
			}
		}
		cout << temp << endl;

	}

	delete(a);
	delete(b);
}