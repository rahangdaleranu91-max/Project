class Solution {
public:
    int countLargestGroup(int n) {

        int count[40] = {0};

        for (int i = 1; i <= n; i++) {

            int num = i;
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            count[sum]++;
        }

        int maxi = 0;
        int ans = 0;

        for (int i = 1; i < 40; i++) {

            if (count[i] > maxi) {
                maxi = count[i];
                ans = 1;
            }
            else if (count[i] == maxi) {
                ans++;
            }
        }

        return ans;
    }
};
