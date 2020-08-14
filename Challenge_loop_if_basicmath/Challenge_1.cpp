#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void show_assend(double min, double max) {
	for (int i = min; i <= max; i++) {
		printf("%d ", i);
	}
	printf("\n");
}

void show_dessend(double min, double max) {
	for (int i = min; i >= max; i--) {
		printf("%d ", i);
	}
	printf("\n");
}

double avg(double min, double max) {
	return (((max - min + 1) / 2) * (min + max))/((max - min + 1));
}

void SD(double min, double max) {
	double SD;
	double SD2 = 0;
	for (int i = 0; i < max - min + 1; i++) {
		SD2 += pow((avg(min, max) - (min + i)), 2);
	}
	SD = sqrt(SD2 / (max - min));
	printf("SD = %.2lf", SD);
}
int main() {
	double min, max;
	printf("Input : ");
	scanf("%lf %lf", &min, &max);
	if (min < max) {
		show_assend(min, max);
		printf("%.1f\n", avg(min, max));
		SD(min, max);
	}
	else if (max < min) {
		show_dessend(min, max);
		printf("%.1f\n", avg(max, min));
		SD(max, min);
	}
	return 0;
}