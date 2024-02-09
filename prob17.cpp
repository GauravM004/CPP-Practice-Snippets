#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favchar;
    float salary;
};

int main()
{
    struct employee harry;
    harry.eId = 1;
    harry.favchar = 'c';
    harry.salary = 12000000;

    // cout<<"The value is" <<harry.eId<<endl;
    // cout<<"The value is" <<harry.favchar<<endl;
    // cout<<"The value is" <<harry.salary<<endl;
    cout << "The eid of harry is" << harry.eId << endl;
    cout << "The favchar of harry is" << harry.favchar << endl;
    cout << "The salary of harry is" << harry.salary << endl;

    return 0;
}
