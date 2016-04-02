#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define MAX 50000
int female[MAX];
int male[MAX/2];

int main()
{
    int n,q;
    while(cin>>n){
	for(int i=0;i<n;i++)
	    cin>>female[i];
	cin>>q;
	for(int i=0;i<q;i++)
	    cin>>male[i];
	for(int i=0;i<q;i++){
	    int j=0;
	    int low = lower_bound(female, female + n, male[i]) - female - 1;
	    int high = upper_bound(female, female + n, male[i]) - female;
	    if(low < 0)
		low++; 
	    if(female[low] < male[i])
		cout<<female[low]<<" ";
	    else cout<<"X ";

	    if(high == n || male[i]==female[high])
		cout<<"X"<<endl;
	    else cout<<female[high]<<endl;
	}
    }
}
