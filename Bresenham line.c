#include <stdio.h>
#include<graphics.h>
void drawline(int x0, inty0, int xl, int yl)
{
    int dx, dy, p, x, y;
    dx=xl-x0;
    dy=yl-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while (x<xl)
    {
        if (p>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;}
            x=x+1;
    }
}
int main()
{
    int gdriver=DETECT, gmode, error, x0, y0, xl, yl;
    initgraph(&gdriver, &gmode,"c:\\turboc3\\bgi");
    printf("Enter Coordinets of first point:");
    scanf("%d%d", &x0, &y0);
    printf("Enter Coordinats of second point:");
    scanf(%d%d, &xl, &yl);
    drawline(x0, y0, xl, yl);
    return 0;
}


