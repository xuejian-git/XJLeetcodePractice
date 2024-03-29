/*
 * @lc app=leetcode.cn id=2373 lang=cpp
 *
 * [2373] 矩阵中的局部最大值
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 1));
        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < n - 2; ++j) {
                for (int k = i; k < i + 3; ++k) {
                    for (int r = j; r < j + 3; ++r) {
                        maxLocal[i][j] = max(maxLocal[i][j], grid[k][r]);
                    }
                }
            }
        }
        return maxLocal;
    }
};
// @lc code=end

