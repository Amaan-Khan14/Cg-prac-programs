#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void floodfill1(int x,int y,int oldcolor,int newcolor)
{
if(getpixel(x,y)==oldcolor)
{
putpixel(x,y,newcolor);
floodfill1(x+1,y,oldcolor,newcolor);
floodfill1(x-1,y,oldcolor,newcolor);
floodfill1(x,y+1,oldcolor,newcolor);
floodfill1(x,y-1,oldcolor,newcolor);
}
}
int main()
{
int gm,gd=DETECT,radius;
int x,y;
printf("Entre x and y position of circle : ");
scanf("%d %d",&x ,&y);
printf("entre radius of circle : ");
scanf("%d" ,&radius);
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(x,y,radius);
floodfill1(x,y,0,15);
rectangle(50,50,100,100);
floodfill1(51,51,0,15);
getch();
closegraph();
return 0;
}
