#include<bits/stdc++h>

// Rebase with experimental branch..
//Added Feature 1
//Added Feature 2
//Added Feature 3
//added from main..
int main(){
    cout<<"Hello World";
    cout<<"Factorial of number 9 is: ";
    cout<< calculateFactorial(9)<<endl;
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

//Added from main
int calculateFibonacci(int n){
    int f[n + 2];  
    int i; 
    f[0] = 0; 
    f[1] = 1; 
  
    for(i = 2; i <= n; i++) 
    { 

       f[i] = f[i - 1] + f[i - 2]; 
    } 
    return f[n]; 
    } 
}

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    if (n <= 0) return -1; 
    std::vector<int> primes;
    int num = 2; 
    while (primes.size() < n) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
        num++;
    }
    return primes.back(); 
}