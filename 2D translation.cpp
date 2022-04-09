#include<conio.h>
#include<graphics.h>
#include<stdio.h>
 main()
{
int gd=DETECT,gm;
int l[2][2],v[2]={10,15},i=0,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the initial and final coordinates of a line ");

while(i<2)
{
printf("x%d and y%d = ",i,i);
j=0;
scanf("%d",&l[i][j]);
scanf("%d",&l[i][j+1]);
i++;
}

line(l[0][0],l[0][1],l[1][0],l[1][1]);
setcolor(YELLOW);

line(l[0][0]+v[0],l[0][1]+v[1],l[1][0]+v[0],l[1][1]+v[1]); 
getch();
closegraph();
}

