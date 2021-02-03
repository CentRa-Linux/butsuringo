#ifndef   FPC_HPP
#define   FPC_HPP
#include <stdio.h>
#include <cmath>
#include <tuple>

class Point
{
public:
    float x;
    float y;

    Point() {
        x = 0;
        y = 0;
    }
    Point(float x0, float y0) {
        x = x0;
        y = y0;
    }

    Point abs() {
        Point p0;
        p0.x = std::abs(x);
        p0.y = std::abs(y);
        return p0;
    }

    Point operator + (Point p0) {
        Point p1;
        p1.x = x + p0.x;
        p1.y = y + p0.y;
        return p1;
    }
    Point operator - (Point p0) {
        Point p1;
        p1.x = x - p0.x;
        p1.y = y - p0.y;
        return p1;
    }
    Point operator * (Point p0) {
        Point p1;
        p1.x = x * p0.x;
        p1.y = y * p0.y;
        return p1;
    }
    Point operator / (Point p0) {
        Point p1;
        p1.x = x / p0.x;
        p1.y = y / p0.y;
        return p1;
    }

    Point operator + (float i0) {
        Point p1;
        p1.x = x + i0;
        p1.y = y + i0;
        return p1;
    }
    Point operator - (float i0) {
        Point p1;
        p1.x = x - i0;
        p1.y = y - i0;
        return p1;
    }
    Point operator * (float i0) {
        Point p1;
        p1.x = x * i0;
        p1.y = y * i0;
        return p1;
    }
    Point operator / (float i0) {
        Point p1;
        p1.x = x / i0;
        p1.y = y / i0;
        return p1;
    }
};

std::tuple<Point, Point> AGGBezier(Point p0, Point p1, Point p2, float tension);

#endif // FPC_HPP