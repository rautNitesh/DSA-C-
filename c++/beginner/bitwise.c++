#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter a number"<< endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int c = a&b;
    int c2 = a || b;
    int c3 = ~a;
    int c4 = a^b;
    cout<< c<<endl<< c2<< endl<< c3 << c4 <<endl;
}