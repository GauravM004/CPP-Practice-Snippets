#include<iostream>
using namespace std;

int main()
{
    const float a =3.11;            //constants in c++........
    cout<<"The value of a was:"<<a<<endl;
    a=45;      // here you will get error as a  is already taken as  const float.......
    cout<<"The value of a is:"<<a<<endl;

    return 0;
}