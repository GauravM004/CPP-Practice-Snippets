#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b=&a;                               //pointers ...............
    cout<<"The adress of a is "<<&a<<endl;  
    cout<<"The adress of b is "<<b<<endl;


    cout<<"The value at address b is "<<*b<<endl;


    return 0;

}

