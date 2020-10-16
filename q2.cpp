#include<iostream>
#include<math.h>
using namespace std;

class Circle{
public :
	float radius(int, int,int,int);
	float area(float);
};

float Circle::radius(int x1, int x2,int y1,int y2){
	float diameter = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    float  radius = diameter/2;
    return radius;
}
float Circle::area(float r){
	float area= 3.14 * r*r;
	return area;
}
int main()
{
float x1,x2,y1,y2;
float radius;
Circle c;
cout<<"\n Enter co ordiantes";

cout<<"\n Enter x1 :";
cin>>x1;

cout<<"\n Enter y1 :";
cin>>y1;

cout<<"\n Enter x2 :";
cin>>x2;

cout<<"\n Enter y2 :";
cin>>y2;

radius=c.radius(x1,x2,y1,y2);
cout<<"\nArea of circle : "<<c.area(radius);


return 0;
}
