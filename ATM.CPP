
#include<iostream.h>
#include<conio.h>
    int amount=1000;
   void balance()
   { cout<< "account balance   "<<amount;
   }
		void withraw() {
		int  raw;
		cout<< "\n " <<" enter amount " ;
		cin>>raw;
		amount=amount-raw;
		cout<<amount;
		cout<<"success"<<"\n";
		}
		 void deposite() {
		 int  depo;
		cout<< "\n " <<" enter amount " ;
		cin>>depo;
		amount=amount+depo;
		cout<<amount;
		cout<<"success"<<"\n";
		}
 int main()
{
clrscr();
int pin;
y:
cout<< "enter pin";
cin>>pin;
if (pin==1234){
x:
int p;
cout<< " 1 check " <<"\n"<<" 2 withraw" <<"\n"<< "3 eposite " <<"\n"<<"exit prss 0"<<"\n";
cin>>p;
if (p==1){
 balance() ;
}
else if(p==2){
withraw();
}
else if(p==3)
{
deposite() ;
}
else if(p==0)
{
return 0;
}  else

{
cout<<"error"<< "\n";
}
goto x;
return 0; }
getch();
}