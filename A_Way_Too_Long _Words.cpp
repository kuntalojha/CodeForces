// CodeForce Problem 
// Solution Created by KUNTAL OJHA  on 20/02/2022
// Problem LInk https://codeforces.com/contest/71/problem/A
// Defficalty Level : 400 
// Problem Tages:   strings  *800

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        if(len>10)
        {
          cout<<s[0]<<len-2<<s[len-1]<<endl;
        }else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}
