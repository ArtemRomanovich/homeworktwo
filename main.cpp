#include <iostream>
#include<stdlib.h>
#include <cmath>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Значение 1: ";
    cin>>num1;
    cout<<"Значение 2: ";
    cin>>num2;
    if (num1 > num2)
    {
        cout<<"Больше.";
    }

    else if (num1 < num2)
    {
        cout<<"Меньше.";
    }

    else
    {
        cout<<"Равны.";
    }
}
