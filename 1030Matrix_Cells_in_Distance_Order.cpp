class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector<vector<int>> ans;
        
        // Saare cells store karo
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                ans.push_back({i, j});
            }
        }

        // Distance ke according sort
        sort(ans.begin(), ans.end(), [&](vector<int>& a, vector<int>& b) {
            
            int d1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int d2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);
            
            return d1 < d2;
        });

        return ans;
    }
};
