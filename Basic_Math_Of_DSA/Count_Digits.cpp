class Solution
{
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n)
    {
        // code here
        int count = 0;
        int number = n;
        while (n != 0)
        {

            int lastdigit = n % 10;
            if (lastdigit != 0)
            {
                if (number % lastdigit == 0)
                {
                    count++;
                }
            }
            n = n / 10;
        }
        return count;
    }
};
