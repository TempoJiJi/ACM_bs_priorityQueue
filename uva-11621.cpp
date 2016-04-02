#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

unsigned int next[500];

int main()
{
    long long pos=0,n,two=0,three=0;
    next[pos]=1;
    while(next[pos] > next[pos-1]){
	if(next[two]*2 < next[three]*3)
	    next[++pos] = next[two++]*2;
	else{
	    if(next[three]*3 == next[two]*2)
		two++;
	    next[++pos] = next[three++]*3;
	}
    }
    while(cin>>n){
	if(n==0)
	    break;
	int ans = upper_bound(next, next+pos, n) - next;
	if(next[ans-1] == n)
	    cout<<next[ans-1]<<endl;
	else
	    cout<<next[ans]<<endl;	    
    }
}
