#include <iostream>

using namespace std;

// 체스판 N X N 의 N개의 핀
const int n = 8;
int countOfAnswer = 0;

int col[n];

bool IsOk(int y)
{
    for(int i = 0; i < y; i++)
    {
        if(col[i] == col[y]|| abs(col[y] - col[i]) == y - i)
            return false;
    }
    return true;
}

void Search(int y)
{
    if (y == n)
    {
        countOfAnswer++;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        col[y] = x;
        if(IsOk(y))
            Search(y+1);
    }
}

int main(void)
{
    Search(0);
    cout<<countOfAnswer<<endl;
}
        