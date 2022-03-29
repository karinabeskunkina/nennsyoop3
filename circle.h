#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
class Circle
{
    static const double Pi;
    
public:
    double x;
    double y;
    double r;
    void R(){
        cout << r << endl;
    }
    void D() {
        cout << r * 2 << endl;
    }
    void S() {
        cout << 2 * Pi * r * r << endl;
    }
    void P() {
        cout << 2 * Pi * r << endl;
    }
    void Fields() {
        cout << x - r << " " << x + r << " " << y - r << " " << y + r << endl;
    }
};
class Point
{
    double x;
    double y;

};
void Fields(Point, Circle);
const double Circle::Pi = 3.14159265358979323;
