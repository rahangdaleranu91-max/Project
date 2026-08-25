class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        // Agar combine karne par same nahi banta,
        // to common divisor string nahi hai
        if (str1 + str2 != str2 + str1)
            return "";

        int n = gcd(str1.size(), str2.size());

        return str1.substr(0, n);
    }
};
