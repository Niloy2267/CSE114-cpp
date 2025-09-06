#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a; //pointer variable
    cout<<p<<endl; //address of a
    cout<<*p<<endl; //value at address of a
    cout<<&a<<endl; //address of a
    cout<<&p<<endl; //address of pointer variable p
    cout<<sizeof(p)<<endl; //size of pointer variable p
}