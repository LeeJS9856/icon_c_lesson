#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[50], s2[50];
	scanf("%s %s", s1, s2);
	printf("%s%s", s1, s2);
	return 0;
}

int solve2()
{
	char s1[50];
	scanf("%[^\n]s", s1);
	char* ptr = strchr(s1, ' ');
	int i = 1;
	while (ptr != NULL)
	{
		ptr = strchr(ptr+1, ' ');
		i++;
	}
	printf("%d", i);
	return 0;
}

int solve3()
{
	char s1[50];
	char c1;
	scanf("%[^\n]s", s1);
	while (getchar() != '\n'); 
	scanf("%c", &c1);
	char* ptr = strchr(s1, c1);
	int i;
	if (ptr == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (ptr != NULL)
		{
			ptr = strchr(ptr + 1, c1);
			i++;
		}
	}
	printf("%d", i);
	return 0;
}

int solve4()
{
	char s1[300];
	scanf("%s", s1);

	int j = 0;
	int count = 0;
	char maxaph[300];
	int z = 0;
	for (int i = 65; i <= 90; i++)
	{
		char aph = i;
		char APH = i + 32;
		char* ptr = strchr(s1, aph);
		if (ptr == NULL)
		{
			count = 0;
		}
		else
		{
			count = 0;
			while (ptr != NULL)
			{
				ptr = strchr(ptr + 1, aph);
				count++;
			}
		}
		ptr = strchr(s1, APH);
		if (ptr == NULL)
		{
			
		}
		else
		{
			while (ptr != NULL)
			{
				ptr = strchr(ptr + 1, APH);
				count++;
			}
		}
		if (count >= j)
		{
			j = count;
			maxaph[z] = aph;
			z++;
		}
		
	}
	printf("%c\n", maxaph[z - 1]);
	
	//시간과 지능의 문제로 인해 가장많이 사용한 알파벳은 랜덤이 아니라 사전순으로 출력됩니다 ㅠㅠ
	
	return 0;
}