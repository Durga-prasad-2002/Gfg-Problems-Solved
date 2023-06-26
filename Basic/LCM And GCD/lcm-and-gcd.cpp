//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long euc(long long A,long long B){
      if(A==0) return B;
      return euc(B%A,A);
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>ans;
       long long a=euc(A,B);
       ans.push_back(A*B/a);
       ans.push_back(a);
       return ans;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends