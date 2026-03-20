
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    // Point p1 = makePoint(0.0,0.0);
    
    // // test your code by calling the functions and printing the output 
    // Point p2 = makePoint(1, 1);
    // Point p3 = makePoint(2, 1);
    // Line l = makeLine(p2, p3);
    // printf("%f\n", lineLength(l));
    
    // Point p4 = makePoint(1, 0);
    // Point p5 = makePoint(0, 1);
    // Triangle t = makeTriangle(p1, p4, p5);
    // printf("%f\n", triangleArea(t));

    // printf("%d\n", pointInTriangle(p2, t));

    // Point p6 = makePoint(2, 2);
    // Point p7 = makePoint(3, 2);
    // Line l2 = makeLine(p6, p7);
    // printf("%d\n", pointInLine(p6, l2));

    Point p8 = makePoint(0, 3);
    Point p9 = makePoint(4, 0);
    Line l3 = makeLine(p8, p9);
    printf("line length main: %f\n", lineLength(l3));
    Point p10 = makePoint(0, 2.99999);
    printf("point in line main: %d\n", pointInLine(p10, l3));

    // problem with same point?
    printf("same point main: %d\n", samePoint(p8, p10));
    return 0;
}
