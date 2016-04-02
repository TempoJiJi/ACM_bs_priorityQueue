#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

#define MAX 1000001
int NOD[MAX];

int main() {
    
    /*	Count NOD   */
    for(int i=1; i<MAX; i++)
	for(int j=i; j<MAX; j+=i)
	    NOD[j]++;

    int n[MAX];
    n[0] = 1; 
    /*	Count N	*/
    for(int i=1;i<MAX;i++)
	n[i] = n[i-1] + NOD[n[i-1]];

    int T,c=1;
    cin>>T;
    while(T--){
	int a,b;
	cin>>a>>b;
	int low = lower_bound(n, n+MAX, a) - n ;
	int high = upper_bound(n, n+MAX, b) - n;
	if(low < 0)
	    low++;
	printf("Case %d: %d\n",c++,high-low);
    }
}
