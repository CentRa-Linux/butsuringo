#include "fp-c.hpp"

std::tuple<Point, Point> AGGBezier(Point p0, Point p1, Point p2, float tension) {
    Point m0 = (p0 + p1) / 2;
    Point m1 = (p1 + p2) / 2;
    Point l0 = p0 - p1;
    Point l1 = p2 - p1;
    float len0;
    float len1;
    float dis0;
    float dis1;
    Point b;
    Point l2;
    Point ma0;
    Point ma1;

    len0 = sqrtf(l0.x * l0.x + l0.y * l0.y);
    len1 = sqrtf(l1.x * l1.x + l1.y * l1.y);

    dis0 = len0 / (len0 + len1);
    dis1 = len1 / (len0 + len1);

    b = m0 - (m0 - m1) * dis0;
    l2 = p1 - b;

    ma0 = m0 + l2;
    ma1 = m1 + l2;

    return {ma0, ma1};
}