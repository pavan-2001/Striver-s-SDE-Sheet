# include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> matrix, int n, int m) {

    int col0 = 0;
    
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if(j != 0) 
                    matrix[0][j] = 0;
                else 
                    col0 = 0;
            }
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    if(matrix[0][0] == 0) {
        for(int j=0;j < m; j++)
            matrix[0][j] = 0;
    }

    if(col0 == 0) {
        for(int i = 0;i < n; i++)
            matrix[i][0] = 0;
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
    int n = matrix.size();
    int m = matrix[0].size();

    auto ans = zeroMatrix(matrix, n, m);

    for(auto i : ans) {
        for(auto j : i) {
            cout<<j<<' ';
        }
        cout<<endl;
    }
}