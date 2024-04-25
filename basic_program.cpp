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