//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
     int Count(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int count = 0;

    auto isValid = [&](int row, int col) {
        return row >= 0 && row < n && col >= 0 && col < m;
    };

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == 1) {
                int zerosCount = 0;
                for (int k = 0; k < 8; ++k) {
                    int newRow = i + dx[k];
                    int newCol = j + dy[k];
                    if (isValid(newRow, newCol) && matrix[newRow][newCol] == 0) {
                        zerosCount++;
                    }
                }
                if (zerosCount != 0 && zerosCount % 2 == 0) {
                    count++;
                }
            }
        }
    }

    return count;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends