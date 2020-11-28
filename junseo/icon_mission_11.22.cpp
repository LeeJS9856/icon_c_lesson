#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

struct Student
{
	int korean, math, social, science;
};

int main()
{
	int stdnumber, add = 0, res;

	scanf("%d", &stdnumber);

	struct Student std[30];

	for (int n=0; n < stdnumber; n++)
	{
		scanf("%d %d %d %d", &std[n].korean, &std[n].math, &std[n].social, &std[n].science);
		add = add + std[n].korean + std[n].math + std[n].social + std[n].science;
	}

	res = add / 4 / stdnumber;

	printf("%d", res);

	return 0;
}

struct point2D
{
	int x, y;
};

int solve2()
{
	struct point2D p1;
	struct point2D p2;

	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);

	int len_a = p1.x - p2.x;
	int len_b = p1.y - p2.y;

	if (len_a < 0)
	{
		len_a = -len_a;
	}

	if (len_b < 0)
	{
		len_b = -len_b;
	}

	double res = sqrt(pow((len_a), 2) + pow((len_b), 2));
	printf("%f", res);
	return 0;
}

typedef enum _Month
{
	Jan=1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Ouc,
	Nob,
	Dec,
	MonthCount
}Month;

int solve3()
{
	for (Month i = Jan; i < MonthCount; i++) //���� ('Month'��(��) �� �����ڸ� �������� �ʰų� �̸� ���ǵ� �����ڿ� ���Ǵ� ���������� ��ȯ�� �������� �ʽ��ϴ�.) �� �������� �𸣰ڽ��ϴ� ��
	{
		printf("%d", i);
	}

	return 0;
}

