class Solution {
public:
    int divide(int dividend, int divisor) {
        int d1=dividend;int d2=divisor;long long int ans=d1/d2;//variables declare
        if (d1==INT_MIN && d2==-1)return INT_MAX; //printing max val
        if (ans>INT_MAX)return INT_MAX;//printing max val 
        if (ans<INT_MIN)return INT_MIN;//Printing min val
        return ans;}};//printing ans
