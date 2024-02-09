#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;             //If-else statement in c++
    cin>>age;
    if(age<18){
        cout<<"you cannot come to party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age>=60){
        cout<<"iss umar mai ye sab shoba nahi deta hai"<<endl;
    }
    else{
        cout<<"you can come to the party"<<endl;


        return 0;
    }
}