#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double a,b,c,d;
	a = min((R1.x)+R1.w,(R2.x)+R2.w);
	b = max(R1.x,R2.x);
	c = min(R1.y,R2.y);
	d = max((R1.y)-R1.h,(R2.y)-R2.h);
	double A = (a-b)*(c-d);
	if(A>0){
		return A;
	}else{
		return 0;
	}
}

