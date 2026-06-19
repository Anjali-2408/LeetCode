class Solution {
public:
    int reverse(int x) {

        long long revNum = 0;

        while (x != 0) {
            int lastDigit = x % 10;
            revNum = revNum * 10 + lastDigit;

            if (revNum > INT_MAX || revNum < INT_MIN)
                return 0;

            x /= 10;
        }

        return (int)revNum;
    }
};