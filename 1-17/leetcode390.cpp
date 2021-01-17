class Solution {
public:
     int lastRemaining(int n) {
        return answer(n, true);
    }

    int answer(int n, bool flag) {
        if(n == 1)
            return 1;

        if(flag)
        {
            return answer(n>>1, !flag)<<1;
        }
        else
        {
            if(n % 2 == 1)
            {
                return answer(n>>1, !flag)<<1;
            }
            else
            {
                return (answer(n>>1, !flag)<<1)-1;
            }
        }
    }
};
