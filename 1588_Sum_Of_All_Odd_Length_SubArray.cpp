class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for (int len = 1; i + len <= n; len += 2) {
                for (int j = i; j < i + len; j++) {
                    sum += arr[j];
                }
            }
        }

        return sum;
    }
};
