#include<graphics.h>
#include<math.h>
#include<conio.h>
void main ()
{
int x1,y1,x2,y2,i=0;
float delx,dely,len,x,y;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("\n******DDA line DRAWING Algorithm***********");
printf("\n Please enter the starting coordinate of x, y = ");
scanf("%d %d",&x1,&y1);
printf("\n Enter the final coordinate of x, y=");
scanf("%d %d",&x2,&y2);
dely=abs(y2-y1);
delx=abs(x2-x2);
if(delx>dely)
{
len=delx;
}
else
{
len=dely;
}
delx=(x2-x1)/len;
dely=(y2-y1)/len;
x=x1;
y=y1;
do{
putpixel(x,y,3);
x=x+delx;
y=y+dely;
i++;
delay(30);
}while(i<=len);
getch();
closegraph();
}

