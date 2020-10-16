#include<iostream>

using namespace std;

class Rtriangle{
	private:
		int p,h,b;
	public:
		Rtriangle(int P ,int H,int B){
			p=P;
			h=H;
			b=B;
		}
		bool check();
	};
	
    bool Rtriangle::check(){
	if( (p*p + b*b)==(h*h))
	return  true;
	return false;
}


int main(){

int Hypotenuse, Perpdendicular, Base;

cout<<"\n Enter Hypotenuse :-";
cin>>Hypotenuse;

cout<<"\n Enter Perpdendicular:- ";
cin>>Perpdendicular;

cout<<"\n Enter Base :-";
cin>>Base;

Rtriangle t(Perpdendicular,Hypotenuse,Base);

if(t.check( )==true)
cout<<"\n IT IS A RIGHT ANGLE TRIANGLE";
else
cout<<"\n IT IS NOT A RIGHT ANGLE TRIANGLE";
	
	return 0 ;

}
