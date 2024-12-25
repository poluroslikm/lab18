#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
struct point {
	float x;
	float y;
	char name;
};

typedef struct point Point;

int lab18task1();
void put_point(Point z);
Point vvod_point();
float dist(Point z, Point w);
Point middle(Point z, Point w);
void chetvert(Point z);

int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите номер задания лабораторной ");
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		lab18task1();
		break;
	case '2':
		//lab25task2();
		break;
	case '3':
		//lab25task3();
		break;
	default:
		printf("Неизвестная операция.\n");
	}
}
void put_point(Point z) {

	printf("Точка %c (%.2f;%.2f)\n", z.name, z.x, z.y);
}
void chetvert(Point z) {
	if ((z.x >= 0) && (z.y >= 0)) 
		printf("Точка %c находится в первой четверти\n", z.name);
	if ((z.x < 0) && (z.y >= 0))
		printf("Точка %c находится во второй четверти\n", z.name);
	if ((z.x < 0) && (z.y < 0))
		printf("Точка %c находится в третьей четверти\n", z.name);
	if ((z.x >= 0) && (z.y < 0))
		printf("Точка %c находится в четвертой четверти\n", z.name);
}
Point vvod_point() 
{
	Point z;
	printf("Введите x, y и название точки\n");
	scanf("%f", &z.x);
	scanf("%f", &z.y);
	getchar();
	scanf("%c", &z.name);
	return z;
}
float dist(Point z, Point w)
{
	float r = sqrt(pow((w.x-z.x),2)+ pow((w.y - z.y), 2));
	return r;
}
Point middle(Point z, Point w)
{
	Point m;
	m.name = 'M';
	m.x = (z.x + w.x) / 2;
	m.y = (z.y + w.y) / 2;
	return m;
}
int lab18task1()
{
	Point b, a, c, d, m;
	float r;
	a = (Point){ 1.f, 2.f, 'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	put_point(a);
	put_point(b);
	printf("\n");
	c = vvod_point();
	put_point(c);
	d = vvod_point();
	put_point(d);
	r = dist(c, d);
	printf("\n");
	printf("Расстояние между точками %.2f\n", r);
	m = middle(c, d);
	printf("\n");
	printf("Средняя точка:\n");
	put_point(m);
	printf("\n");
	chetvert(c);
	chetvert(d);
	chetvert(m);
}