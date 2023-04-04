#include<iostream>
using namespace std;

int main(){
    int n;
    double sum = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum: "<< sum<< endl;
}