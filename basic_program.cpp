#include<bits/stdc++h>

//added from main..
int main(){
    cout<<"Hello World"; 
    cout<<"Fibonacii of 11 is: " ;
    cout<<calculateFibonacci(10)<<endl;
}

// Added from feature-branch
int calculateFactorial(int n){
    int result =0 ;
    for(int i=1 ; i<=n ; i++){
        result *=i;
    }

    return result;
}

//Added from experimental-branch
int calculateFibonacci(int n){
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2);
}