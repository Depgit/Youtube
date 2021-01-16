#include <bits/stdc++.h>

using namespace std;

int v[1000000001];

// normal approach
void prime_factorise(int n){
    for(int i=2;i<=n;i++){
      if(n%i==0){
         int ct = 0;
         while(n%i==0){
             ct++;n /= i;
         }
       v[i] = ct;
       // for printing value's 
       cout<<i<<" :"<<cnt<<endl;
    }
}

void prime_factorise(int n){
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
         int ct = 0;
         while(n%i==0){
             ct++;n /= i;
         }
       v[i] = ct;
       // for printing value's 
       cout<<i<<" :"<<cnt<<endl;
    }
}

int main(){
  int a;cin>>a;
  prime_factorise(a);
}
