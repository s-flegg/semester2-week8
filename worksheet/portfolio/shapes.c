
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

#include <stdlib.h>

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine( Point p1, Point p2) {
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3) {
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l) {
    float cx = fabs(l.p[0].x - l.p[1].x);
    float cy = fabs(l.p[0].y - l.p[1].y);

    float length = sqrt(pow(cx, 2) + pow(cy, 2));
    return length;
}
float triangleArea( Triangle t) {
    // A = sqrt(s(s-a)(s-b)(s-c))
    // s = 0.5(a+b+c)

    // make sides
    float a = lineLength(makeLine(t.p[0], t.p[1]));
    float b = lineLength(makeLine(t.p[1], t.p[2]));
    float c = lineLength(makeLine(t.p[2], t.p[0]));
    
    // semiperimiter
    float s = 0.5 * (a + b + c);

    // area
    return (float) sqrt(s * (s - a) * (s - b) * (s - c));
}

// return true only if the point is the same location
bool samePoint( Point p1, Point p2) {
    return (fabs(lineLength(makeLine(p1,p2)))<1.0e-6) ? true: false;
}
// return true only if the point is one of the line endpoints
bool pointInLine( Point p, Line l) {
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}
// return true only if the point is one of the triangle vertices
bool pointInTriangle( Point p, Triangle t) {
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}
