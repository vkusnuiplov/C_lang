#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

struct stul {
	int x, y, z;
	char name[50];
	char color[20];
} s;

int main()
{
	struct stul s[3];

	for (int i = 0; i < 3; i++)
	{
		s[i].x = rand() % 100;
		s[i].y = rand() % 100;
		s[i].z = rand() % 100;
	}

	sprintf(s[0].name, "stulchik");
	sprintf(s[0].color, "green");
	sprintf(s[1].name, "stil");
	sprintf(s[1].color, "red");
	sprintf(s[2].name, "shafa");
	sprintf(s[2].color, "silver");

	for (int i = 0; i < 3; i++)
		printf(" name = %s\n x = %d\n y = %d\n z = %d\n color = %s\n\n",
			s[i].name, s[i].x, s[i].y, s[i].z, s[i].color);
	
	return 0;
}




