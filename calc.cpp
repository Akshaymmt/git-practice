#include<iostream>
using namespace std;

int add(int c,int b)
{
    //edited by merge for conflicts practice in rebase
    return c+b;

    //edited to rebase conflict by rebase branch

    //edited to rebase conflict by rebase branch
}
int sub( int a,int b )
{
    return a-b;
}
int mul( int a,int b )
{
    return a*b;
}
int div ( int a,int b )
{
    return a/b;
}
int main()
{
    int a=10,b=10;
    cout << "\n addition -"<<add( a,b );
    cout << "\n substraction -" << sub( a,b );
    cout << " \n multiplication - "<< mul( a,b );
    cout << " \n division -" << div ( a,b ); 
    cout << " \n division -"<< div ( a,b ); 
}