class Solution

{
public:
    bool isPalindrome(int x)
    {
        int last_digit;
        long int reversed = 0;
        int n = x;
        if (x < 0)
        {
            return false;
        }
        else if (x >= 0)
        {
            while (n != 0)
            {
                last_digit = n % 10;
                reversed = reversed * 10 + last_digit;
                n = n / 10;
            }
            if (reversed == x)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return 0;
    }
};
