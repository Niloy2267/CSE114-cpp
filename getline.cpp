#include<iostream>
using namespace std;

int main(){
    char s[100];

    cout<<"Enter a line of text (end with $): ";

    cin.getline(s,100,'$'); //reads a line of text including spaces
    cout<<s<<endl; //prints the line of text
    return 0;
}