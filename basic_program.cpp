#include<bits/stdc++h>


int main(){
    cout<<"Hello World";
    cout<<"Factorial of number 9 is: ";
    cout<< calculateFactorial(9)<<endl;
}
int calculateFactorial(int n){
    int result =0 ;
    for(int i=1 ; i<=n ; i++){
        result *=i;
    }

    return result;
}