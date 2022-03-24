#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n, x;
	int result;
	while(t--)
	{
	    cin>>n>>x;
	    if(x < n)
	    {
	        result = (2 * n) - (x-1);
	        cout<<result<<endl;
	    }
	    else if(x == n)
	    {
	        result = n + 1;
	        cout<<result<<endl;
	    }
	    else
	    {
	        result = (2*n - x) + 1;
	        cout<<result<<endl;
	    }
	    
	}
	return 0;
}
