#include <iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(WHITE);
    line(10,10,210,10);
    line(10,130,210,130);
    line(10,10,10,130);
    line(210,10,210,130);
    setfillstyle(1,GREEN);
    floodfill(110,20,WHITE);
    setcolor(WHITE);
    circle(100,70,40);
    setfillstyle(1,RED);
    floodfill(110,80,WHITE);


    getch();
    closegraph();

}
