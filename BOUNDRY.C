#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void floodFill1 (int x, int y,int oldcolor,int newcolor)
{
	if(getpixel(x,y) == oldcolor)
	{
		putpixel(x,y,newcolor);
		floodFill1(x+1,y,oldcolor,newcolor);
		floodFill1(x,y+1,oldcolor,newcolor);
		floodFill1(x-1,y,oldcolor,newcolor);
		floodFill1(x,y-1,oldcolor,newcolor);
	}
}

int main()
{
	int gm,gd=DETECT, radius;
	int x,y;
	printf("Enter x and y positions for circle\n");
	scanf("%d %d", &x,&y);
	printf("Enter radius of circle\n");
	scanf("%d", &radius);
	initgraph(&gd,&gm, "c:\\TC\\bgi"); circle(x,y,radius);
	floodFill1(x,y,0,15);
	rectangle(50,50,100,100);
	floodFill1(51,51,0,15);
	getch();
	closegraph();
	return 0;
}
