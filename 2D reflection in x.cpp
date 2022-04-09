#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3;
    char a;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    printf("\n Enter the coordinates of triangle x1,y1,x2,y2,x3,y3 ");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
        x1=x1;
        x2=x2;
        x3=x3;
        y1=y1+240;
        y2=y2+240;
        y3=y3+240;


    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
