#include<stdio.h>
#include<windows.h>
void draw_xy_line01(int a, int b )
{
	
	int x, y;
	for(x=1; x<=10; x+=1)
	{
		y=a*x+b;
		gotoxy(x,y);
		printf("*");
	}
}
void gotoxy(int x, int y)
{
	COORD Pos = {x, y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}
int main()
{
	int a,b;
	
	printf("y=ax+b�� ���� ���� ��ǥ�� ��� \n");
	printf("���� a�Է� >");
	scanf("%d",&a);
	printf("���� b�Է�>");
	scanf("%d",&b);
	system("cls");
	draw_xy_line01(a, b);
	printf("\n");
	
	return 0; 
}


