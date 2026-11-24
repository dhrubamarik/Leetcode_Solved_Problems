class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        double ans = fastPow(x, exp < 0 ? -exp : exp);
        return (exp < 0 ? 1.0 / ans : ans);
    }
    
    double fastPow(double x, long long exp) {
        if (exp == 0) return 1.0;
        double half = fastPow(x, exp / 2);
        if (exp % 2 == 0) return half * half;
        return half * half * x;
    }
}; 