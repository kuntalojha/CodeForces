// CodeForce Problem 
// Solution Created by KUNTAL OJHA  on 22/02/2022
// Problem LInk https://codeforces.com/contest/231/problem/A
// Defficalty Level : 800 
// Problem Tages: brute force greedy *800

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if( (a==1 & b==1) | (a==1 && c==1) | (b==1 && c==1) )
		{
			count++;
		}
	}
	cout<<count;
    return 0;
}
