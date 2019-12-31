#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int sub( int a,int b )
{
    return a-b;
}
int mul( int a,int b )
{
    return a*b;
}
int main()
{
    int a=10,b=10;
    cout << "\n addition -"<<add( a,b );
    cout << "\n substraction -" << sub( a,b );
    cout << " \n multiplication - "<< mul( a,b );
}