class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=m-1;
        vector<int> ans;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom){
                for(int k=right;k>=left;k--){
                    ans.push_back(matrix[bottom][k]);
                }
                bottom--;
            }
            if(left<=right){
                for(int l=bottom;l>=top;l--){
                    ans.push_back(matrix[l][left]);
                }
                left++;
            }
        }
        return ans;
    }
};