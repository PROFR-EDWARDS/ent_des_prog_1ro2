#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"PROPORCIONA UN NUMERO: ";
    cin>>num;
    if (num>0)
       cout<<"ES NUMERO POSITIVO.......";
    else
      if (num<0)
         cout<<"ES UN NUMERO NEGATIVO.....";
      else
        cout<<"ES UN NUMERO NULO O NULL....";
    getch(); 
}
