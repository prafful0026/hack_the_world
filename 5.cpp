#include<iostream>
using namespace std;

class Bank{
	private:
		int amt;
public: 
   Bank(int A){
   	amt=A;
   }
    void deposit(int);
	void withdraw(int);
	int newBalance();	
};
void Bank::deposit(int a){
	amt=amt + a;
}
void Bank::withdraw(int a){
	if(a>amt)
	cout<<"\n ENTER VALID AMOUNT";
	else
	amt=amt-a;
}
int Bank::newBalance(){
	return amt;
}
int main()
{
int balance;
int damount;
int wamount;


cout<<"\n Enter your balance : ";
cin>>balance;
Bank account(balance);

cout<<"\n Enter amount to diposit : ";
cin>>damount;

account.deposit(damount);

cout<<"\n Enter amount to withdraw : ";
cin>>wamount;
account.withdraw(wamount);

cout<<"\n Remaining Balance : "<<account.newBalance();
return 0;
}
