#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n > 0) {
            while (n != 1) { x *= x; n -= 1; }
            return x;
        }
        else if (n < 0) {
            while (n != -1) { x /= x; n += 1; }
            return x;
        }
        else
            return 1;
    }
};

int main(int argc, char const *argv[])
{
    double x = 0, res = 0;
    int n = 0;
    string line;
    while (getline(cin, line))
    {
        res = Solution().myPow(x, n);
        cout << res << endl;
    }

}