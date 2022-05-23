
#include <iostream>
using namespace std;
int num1 , num2,in,i;
int resultado;
int main() {
cout<<"[+] 1 numero ~> ";
cin>>num1;
cout<<"[+] 2 mumero ~> ";
cin>>num2;
cout<<"\n[+] accion ~> ";
cout<<"\n[1] suma"<<endl;
cout<<"[2] resta"<<endl;
cout<<"[3] multiplicar"<<endl;
cout<<"[4] dividir"<<endl;
cin>>in;

switch(in){

case 1:
resultado=num1+num2;
   cout<<"[+] resultado ~> "<<resultado;

   break;

case 2:

resultado=num1-num2;
cout<<"[+] resultado ~> "<<resultado;

break;

case 3:

resultado=num1*num2;
cout<<"[+] resultado ~> "<<resultado;

break;

case 4:

resultado=num1/num2;
cout<<"[+] resultado ~> "<<resultado;

break;

default: cout<<"???";
   break;
}


return 0;
}