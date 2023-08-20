//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
/* if x is present in arr[] then returns the count
of occurrences of x, otherwise returns 0. */
int count(int arr[], int n, int x) {
    int c = 0;        // here makes a count variable
    for(int i = 0; i< n; i++){     // traverse the array using for loop till last element
        if(arr[i] == x){    // if any element is equal to the given number
            c++;             // then increase the value of count
        }
    }
    return c;            // and at last return the occurance of that number
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends