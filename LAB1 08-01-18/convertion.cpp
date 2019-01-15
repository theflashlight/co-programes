//Joshua Richin
//17co46

#include<iostream>
#include<stdlib.h>
using namespace std;
long a,rem,sum=0,i=1,base=1,bin,num;

void D2B(long dec)
{
do
{
    rem=dec%2;
    sum=sum+(i*rem);
    dec=dec/2;
    i=i*10;
}while(dec>0);
cout<<"\n"<<sum;
}

void B2D(long dec)
{]'ko0'
bin=dec;
while(dec>0)
{
    rem=dec%10;
    num=num+rem*base;
    base=base*2;
    dec=dec/10;
}
cout<<num;
}


int main()
{
long dec=0;
while(1)
{
    cout<<"Enter 1.To convert decimal to binary\nEnter 2. To convert binary to decimal \nEnter 3. Exit\n";
    cin>>a;
    switch (a)
        {
        case 1:cout<<"Enter a number :";
                cin>>dec;                                                                   //110110111
                D2B(dec);
                break;
        case 2:cout<<"Enter a number :";
                cin>>dec;
                B2D(dec);
                break;
        case 3: exit(1);
        default:cout<<"\nEnter right options";
        }
    return 0;
}
}




