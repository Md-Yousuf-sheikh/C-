#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d , sum1=0,sum2=0;
    cin>>a>>b>>c>>d;
    sum1 += a*b;
    sum2 += c*d;

    if(sum1>sum2){
        cout<<sum1;
    }else if(sum1<sum2){
        cout<<sum2;
    }else{
        cout<<sum2;
    }

}