// CodeForce Problem 
// Solution Created by KUNTAL OJHA  on 21/02/2022
// Problem LInk https://codeforces.com/problemset/problem/4/A
// Defficalty Level : 800 
// Problem Tages: brute force math *800

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>>w;
    if(w%2==0)
    {
        if(w/2>=2)
        {
        	cout<<"YES";
        }else
        {
        	cout<<"NO";
        }
    }else
    {
        cout<<"NO";
    }
  return 0;
}
