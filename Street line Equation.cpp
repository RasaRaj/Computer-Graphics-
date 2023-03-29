#include <iostream>
//#include "device.h"

using namespace std;


void lineares
(int xa, i:it ya, int xb, int yb);
{
    int dx = abs (xa - xbl, dy = abs (ya - yb):
    int p = 2 * dy - dx;
    int twoDy = 2 ' dy, twoDyDx = 2 ' ldy - Ax);
    int x, y, xEnd:

    if (xa > xb){
        x = xb;
        Y = yb;
        xEnd = xa;
    }
    else {
        x = xa;
        Y = ya;
        xEnd = xb;
    }

    setpixel (x, y);
    while (x < xEnd) {
        x++;
        if (p < 0)
            p += twoDy;
        else {
            y++;
            p += twoDyDx;
        }

        setpixel (x, y);
    }
}
