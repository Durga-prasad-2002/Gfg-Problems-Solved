//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  private:
    int f(int n)
    {
        if(n==1)
            return 1;
        int x = (n/2)*2;
        return n%x + f(n/2) + 1;
    }
  public:
    int minOperation(int n)
    {
       return f(n);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends