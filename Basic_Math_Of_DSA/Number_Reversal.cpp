class Solution
{
public:
    int reverse(int x)
    {
        if (x == INT_MIN)
            return 0;  // Directly return 0 to prevent undefined behavior

        std::deque<int> reversal;
        int lastdigit;
        int n = abs(x);
        int reversed = 0;

        while (n != 0)
        {
            lastdigit = n % 10;
            reversal.push_front(lastdigit);
            n = n / 10;
        }

        while (!reversal.empty())
        {
            int digit = reversal.back();
            reversal.pop_back();

            // Overflow Check
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
                return 0;
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit > 8))
                return 0;

            reversed = reversed * 10 + digit;
        }

        return (x < 0) ? -reversed : reversed;
    }
};
