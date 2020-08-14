#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void show_assend(double min, double max) { //ใช้แสดงค่าตัวเลขเดินหน้า
	for (int i = min; i <= max; i++) {
		printf("%d ", i);
	}
	printf("\n");
}

void show_dessend(double min, double max) { //ใช้แสดงตัวเลขถอยหลัง
	for (int i = min; i >= max; i--) {
		printf("%d ", i);
	}
	printf("\n");
}

double avg(double min, double max) { //ใช้หาค่าเฉลี่ย
	return (((max - min + 1) / 2) * (min + max))/((max - min + 1));
}

void SD(double min, double max) { //ใช้หา SD
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
	scanf("%lf %lf", &min, &max);
	if (min < max) { //ถ้าตัวแรกน้อยกว่าตัวหลัง
		show_assend(min, max);
		printf("Average = %.1f\n", avg(min, max));
		SD(min, max);
	}
	else if (max < min) { //ถ้าตัวหลังน้อยกว่าตัวแรก
		show_dessend(min, max);
		printf("Average = %.1f\n", avg(max, min));
		SD(max, min);
	}
	return 0;
}