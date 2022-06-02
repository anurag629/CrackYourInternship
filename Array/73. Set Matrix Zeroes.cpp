class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> column;
        int flag_col = 0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++){
            for(int j=0;j<matrix[row[i]].size();j++){
                matrix[row[i]][j] = 0;
            }
        }
                       
        for(int i=0;i<column.size();i++){
            for(int j = 0;j<matrix.size();j++){
                matrix[j][column[i]] = 0;
            }
        }
        
    }
};