#include <iostream>
#include <cstring>
using namespace std;

class Solution  {
public:
    int reverse(int x)
    {
        int result = 0;
        while (x != 0) {
            if (abs(result) > INT_MAX / 10)
                return 0;
            result = result * 10 + x % 10;
            x /= 10;
        }
        return result;
    }
};

int StringToInteger(string input) {
    return stoi(input);
}

int main()
{
    string line;
    while (getline(cin, line))
    {
        int x = StringToInteger(line);
        int ret = Solution().reverse(x);
        string output = to_string(ret);
        cout << output << endl;
    }
    return 0;
}
