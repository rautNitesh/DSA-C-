#include<iostream>
using namespace std;

int main(){
    int i=4;
    while(i>0){
        int j = i;
        while(j>0){
            cout<< " * ";
            j--;
        }
        cout<< endl;
        i--;
    }
}