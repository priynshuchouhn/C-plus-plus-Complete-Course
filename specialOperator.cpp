#include<iostream>
using namespace std;
int main(){
    int a=10, b = 20 , c;
    cout << sizeof(int) << endl;
    cout << &a << endl;
    c = a<b?a:b;
    cout << c;
}