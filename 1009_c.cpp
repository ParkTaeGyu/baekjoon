// 작성자 : 박태규
// 업로드일: 2016-03-28
// 주제 : 백준알고리즘 1009번문제풀이
// [배열 동적할당][C언어]





#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 
int main(void){

	int T = 0;
	scanf_s("%d",&T);
	int *a = NULL;
	int *b = NULL;
	int temp;
	a = (int*)malloc(sizeof(int)*T);
	b = (int*)malloc(sizeof(int)*T);

	for (int i = 0; i < T; i++){
		while (1){
			scanf("%d%d",&a[i],&b[i]);
			if (a[i] > 1 && a[i] <= 100 && b[i] > 1 && b[i] <= 1000000) break;
		}
	}
	for (int i = 0; i < T; i++){
		temp = a[i];
		for (int j = 0; j < b[i]-1; j++){
			temp = temp * a[i];
			if (temp > 10) {
				temp = temp % 10;
			}
		}
		printf("%d\n", temp);
	}
}