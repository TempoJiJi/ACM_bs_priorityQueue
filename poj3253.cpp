#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{   
    long long n,answer=0,plank,a,b;
    priority_queue<long long,vector<long long>,greater<long long> >p;
    while(cin>>n){
	answer = 0;
	for(long long i=0;i<n;i++){
	    cin>>plank;
	    p.push(plank);
	}
	while(p.size() > 1){
	    a = p.top();
	    p.pop();
	    b = p.top();
	    p.pop();
	    answer += a+b;
	    p.push(a+b);
	}
	cout<<answer<<endl;
    }
}
