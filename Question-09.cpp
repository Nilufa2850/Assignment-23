// 9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std ;

int main ()
{
    int x,y ;
    cout<<"Enter two numbers : ";
    cin>>x>>y ;
    if (x>y)
        cout<<"Maximum number is x = "<<x ;
    else    
        cout<<"Maximum number is y = "<<y ;

    return 0 ;
}
