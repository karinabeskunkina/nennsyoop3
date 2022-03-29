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
    double R(){
        return r;
    }
    double D() {
        return r * 2;
    }
    double S() {
        return 2 * 3.14 * r * r;
    }
    double P() {
        return 2 * 3.14 * r;
    }
    void Fields() {
        cout << x - r << " " << x + r << " " << y - r << " " << y + r << endl;
    }
};
class Point
{
public:
    double x1;
    double y1;

};
void Fields(Point, Circle);

