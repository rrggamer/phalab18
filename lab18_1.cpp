#include <iostream>
#include <algorithm> 
#include <cmath>
using namespace std;

struct Rect {
    double x, y, w, h;
};

double overlap(const Rect& r1, const Rect& r2) {
    
    double left = max(r1.x, r2.x);
    double right = min(r1.x + r1.w, r2.x + r2.w);
    double top = min(r1.y, r2.y);
    double bottom = max(r1.y - r1.h, r2.y - r2.h);

    double width = max(0.0, right - left);
    double height = max(0.0, top - bottom);

    return width * height;
}

int main (){

	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(R1,R2);

}