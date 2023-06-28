#include<bits/stdc++.h>
using namespace std;
// parametrized recursion
void summ(int i , int n){
if(i<1){
cout<<n<<endl;
return ;
}
summ(i-1,n+i);
}
// function recursion
int sumfxn(int n){
    if(n==0){
        return 0;
    }
    return n + sumfxn(n-1);
}
// factorial
int fact(int n){
    if(n==0){
        return 1;
    }
    if(n<0) return NULL;

    return n * fact(n-1);
}
int main()
{
int n;
cin>>n;
// summ(n,0);
// cout<<sumfxn(n)<<endl;
cout<<fact(n)<<endl;
return 0;
}


