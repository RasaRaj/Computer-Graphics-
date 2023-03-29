#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int x, y ,x1, y1, x2, y2, dx, dy, p, i;
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    printf("Enter Coordinets of first point:");
    scanf("%d%d", &x1, &y1);
    printf("Enter Coordinats of second point:");
    scanf("%d%d", &x2, &y2);

    dx=x2-x1;
    dy=y2-y1;
    p=2*dy-dx;
    x=x1;
    y=y1;
    i=0;
    for (i=0; i<=dx; i++)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*dy;
            putpixel(x,y,WHITE);
        }
        else
        {
            x=x+1;
            y=y+1;
            p=p+22*dy-2*dx;
            putpixel(x,y,WHITE);
        }
    }
    getch();
    closegraph();

}




