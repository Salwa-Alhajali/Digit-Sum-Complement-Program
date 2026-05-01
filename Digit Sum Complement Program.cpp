
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{ 
    string x,s;
    int sum =0;
    cin >>x;
    for (int i=0;i<x.size();i++){
        sum+=x[i] - '0';
        
    }
    s=(10-sum?to_string(10-sum):"");
    
    cout<<x+s;

    return 0;
}