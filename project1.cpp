#include<iostream>
using namespace std;

int main()
{
    char fullname[] ={'m','a','h','d','i'};
    char* name=&fullname;
    cout<<*name;
}
