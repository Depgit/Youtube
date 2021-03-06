#include <bits/stdc++.h>

using namespace std;

vector<char> is_prime(n+1, true);

// normal method
void prime_sieve(int n){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i<= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

// optimise method
void prime_sieve(int n){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main(){
  int n;cin>>n;
}
