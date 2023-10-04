#include <iostream>
#include <cstdio>
using namespace std;
void EvenOdd(int n){
    if (n%2==0){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
}

bool NumToLetters(int n){
      
    
    if(n == 1){
        cout<<"one\n";
    }
    else if(n==2){
        cout<<"two\n";
    }
    else if(n==3){
        cout<<"three\n";
    }
    else if(n==4){
        cout<<"four\n";
    }
    else if(n==5){
        cout<<"five\n";
    }
    else if(n==6){
        cout<<"six\n";
    }
    else if(n==7){
        cout<<"seven\n";
    }
    else if(n==8){
        cout<<"eight\n";
    }
    else if(n==9){
        cout<<"nine\n";
    }
    else{
    cout<<"nine\n";
    return true;
    }  
    
}


int main() {
    int num1,num2,n;
    cin>>num1>>num2;
    n= num1;
    bool flag1 = NumToLetters(n);
    n = num2;
    bool flag2 = NumToLetters(n);
    if(flag1){
        EvenOdd(num1);
    }
    if(flag2){
        EvenOdd(num2);
    }
    
    
    return 0;
}