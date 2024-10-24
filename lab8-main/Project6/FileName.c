#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
struct point {
	float x;
	float y;
	char name;
};
typedef struct point Point;
void put_point(Point z) {

	printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}
float dist(Point z, Point w)
{
	float dek;
	dek = sqrt(pow(((z.x + w.x) / 2), 2) + pow(((z.y + w.y) / 2), 2));
	return (dek);
}
Point fav(Point z, Point w)
{
	float f1, f2;
	f1 = (z.x + w.x) / 2;
	f2 = (z.y + w.y) / 2;
	Point p = { f1, f2, 'M' };
	return (p);
}
int lab18task0()
{
	Point b, a, z, w;
	a = (Point){ 1.f, 2.f, 'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	printf("Введите имя точки, координату x,координату y \n ");
	getchar();
	scanf("%c", &z.name);
	getchar();
	scanf("%f", &z.x);
	scanf("%f", &z.y);
	printf("Введите имя точки, координату x,координату y \n ");
	getchar();
	scanf("%c", &w.name);
	getchar();
	scanf("%f", &w.x);
	scanf("%f", &w.y);
	printf("point %c (%.1f,%.1f\n)", b.name, b.x, b.y);
	printf("point %c (%.1f,%.1f\n)", z.name, z.x, z.y);
	Point res = fav(z, w);
	printf("point %c (%.1f,%.1f\n)", res.name, res.x, res.y);
	system("pause");
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите номер задания лабораторной ");
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		lab18task0();
		break;
	default:
		printf("Неизвестная операция.\n");
	}
}