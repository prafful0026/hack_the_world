#include <bits/stdc++.h>
using namespace std;
class fraction{
    private:
        int num,den;
    public:
        fraction(int a=1,int b=1){
        num=a;
        den=b;
    }
        fraction operator + (fraction const& obj){
            fraction res;
            res.num = obj.num*den + num*obj.den;
            res.den = den*obj.den;
            return res;
        }
        fraction operator - (fraction const& obj){
            fraction res;
            res.num = -obj.num*den + num*obj.den;
            res.den = den*obj.den;
            return res;
        }
        fraction operator * (fraction const& obj){
            fraction res;
            res.num = obj.num*num;
            res.den = den*obj.den;
            return res;
        }
        fraction operator / (fraction const& obj){
            fraction res;
            res.num = num*obj.den;
            res.den = den*obj.num;
            return res;
        }
        int getNum(){
            return num;
        }
        int getDen(){
            return den;
        }
};
int main(){
    cout<<"Enter numenator of first fraction: ";
    int num1;
    cin>>num1;
    cout<<"\nEnter denominator of first fraction: ";
    int den1;
    cin>>den1;
    cout<<"\nEnter numenator of second fraction: ";
    int num2;
    cin>>num2;
    cout<<"\nEnter denominator of second fraction: ";
    int den2;
    cin>>den2;
    char ch;
    cout<<"\nEnter operator: ";
    cin>>ch;
    fraction f1(num1,den1),f2(num2,den2);
    fraction res;
    switch(ch){
        case '+':
            res=f1+f2;
            break;
        case '-':
            res=f1-f2;
            break;
        case '*':
            res=f1*f2;
            break;
        case '/':
            res=f1/f2;
            break;
        default:
            cout<<"\nInvalid operator";
    }
    int gcd= __gcd(res.getNum(), res.getDen()) ;
    cout<<res.getNum()/gcd<<"/"<<res.getDen()/gcd;
    return 0;
}
