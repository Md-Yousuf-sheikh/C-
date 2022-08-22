#include<bits/stdc++.h>
using namespace std;

int main (){
    int N,K,X,Y;
    cin>>N>>K>>X>>Y;
    int fastNight = K*X;
    int last = N-K;
    int lastNight = last * Y;
    int total = fastNight + lastNight;

    cout<<total;

    return 0;
}