#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum, count;

void show(int min, int max) {
	for (int i = min; i <= max; i++) {
		printf("%d ", i);
	}
	printf("\n");
}

void avg() {

	printf("Average = %.1f\n", sum/count);
}
int main() {
	int min, max, count;
	printf("Input : ");
	scanf("%d %d", &min, &max);
	show(min, max);
	avg();
	return 0;
}