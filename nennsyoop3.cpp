#include "circle.h"

int main()
{
    Circle r;
    r.x = 0;
    r.y = 0;
    r.r = 3;
    cout << r.R() << endl;
    cout << r.D() << endl;
    cout << r.S() << endl;
    cout << r.P() << endl;
    r.Fields();
    Point t;
    t.x1 = 3;
    t.y1 = 10;
    Fields(t, r);


}