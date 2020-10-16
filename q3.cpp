#include<iostream>

using namespace std;

class Coordinate{
	public:
		int quadrant(float,float);
	};
	
    int Coordinate::quadrant(float a, float b){
	if( a >=0 && b >=0 ){
		return 1;
	}else if( a <0 && b >=0){
		return 2;
	}else if( a <0 && b <0){
		return 3;
	}else{
		return 4;
	}
}

int main()
{
float x,y;

cout<<"\n Enter x : ";
cin>>x;

cout<<"\n Enter y : ";
cin>>y;

Coordinate c;

cout<<"\nQUADRANT IS  "<<c.quadrant(x,y);  
return 0;
}
