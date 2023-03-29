#include <stdio.h>
#include <math.h>
#include <graphics.h>

#define PI 3.14159265

void drawCircle(int xc, int yc, int r) {
    for (float i = 0; i < 360; i=i+0.2) {
        float angle = i * PI / 180;
        int x = xc + r * cos(angle);
        int y = yc + r * sin(angle);
        putpixel(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc = 250;
    int yc = 250;
    int r = 200;

    drawCircle(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
