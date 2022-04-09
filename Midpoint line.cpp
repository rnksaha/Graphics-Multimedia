#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
 
void lineMidPoint(int x1, int y1, int x2, int y2){
    int dx = x2 - x1;
    int dy = y2 - y1;
    int d = 2 * dy - dx;
    int incrE = 2 * dy;
    int incrNE = 2 * (dy - dx);
    int x = x1;
    int y = y1;
    putpixel(x, y, WHITE);
    while(x < x2){
        if(d<=0){
            d += incrE;
            x++;
            }
        else{
            d += incrNE;
            x++;
            y++;
            }
        putpixel(x, y, WHITE);
        }
    }
 
int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "\\tc");
    int x0,y0,x1,y1;
    printf("Enter co-ordinates of first point: ");
	scanf("%d%d", &x0, &y0); 
	printf("Enter co-ordinates of second point: ");
	scanf("%d%d", &x1, &y1);
    lineMidPoint(x0, y0, x1, y1);
    getch();
    return 0;
}
