#include "Solution.h"

void Solution::printWord(string str)
{
    int size = str.length();
    int middle = size / 2;

    string modifiedStr = str.substr(middle, size - 1);
    //cout<<modifiedStr<<endl;

    modifiedStr += str.substr(0, middle);
    //cout<<modifiedStr<<endl;
    for (int iter = 0; iter < size; ++iter)
    {
        cout << modifiedStr.substr(0, iter + 1) << endl;
    }
}
