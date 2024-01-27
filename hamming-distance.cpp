#include<vector>
#include<iostream>
#include<string>

using namespace std;


int HammingDistance(string str1, string str2)
{
    int sumDigitsStr1, sumDigitsStr2;
    sumDigitsStr1 = sumDigitsStr2 = 0;

    // Test for valid inputs: one traversal per input string
    for (auto ch : str1)
    {
        if (ch != '1' && ch != '0')
        {
            cout << "Either first or second input is invalid." << endl;
            return -1;
        }
    }
    
    for (auto ch : str1)
    {
        sumDigitsStr1 += (int)ch;
    }

    for (auto ch : str2)
    {
        sumDigitsStr2 += (int)ch;
    }

    return abs(sumDigitsStr1 - sumDigitsStr2);
}


