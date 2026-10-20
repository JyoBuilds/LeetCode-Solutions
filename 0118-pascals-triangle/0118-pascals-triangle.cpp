class Solution {
public:
    vector<int> generateRows(int rows){
        vector<int> anss;
        long long ans=1;
        anss.push_back(1);
        for(int col=1;col<rows;col++){
            ans*=(rows-col);
            ans/=col;
            anss.push_back(ans);
        }
        return anss;

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>an;
        for(int i=1;i<=numRows;i++){
            an.push_back(generateRows(i));
        }
        return an;
    }
};