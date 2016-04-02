/*****************************
    binary search to sort this ( er fen bi jin fa )
    1e-10 = 0.00000000010000000  (EPS)   
*****************************/
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int p,q,r,s,t,u;

double f(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double search()
{
    double low=0,high=1,x;
    for(int i=0;i<200;i++){
	x = (low+high)/2;
	if(f(x)>0)
	    low = x;
	else 
	    high = x;
    }
    return x;
}

int main()
{
    while(cin>>p>>q>>r>>s>>t>>u){    
	double answer = search();

	/* the fabs is needed because the f(x) maybe is negetive number */
	if(fabs(f(answer)) > 1e-10)
	    printf("No solution\n");
	else
	    printf("%.4lf\n",answer);	    		
    }
}
