#include <iostream>

using namespace std;

int main(void)
{
    int x = 25;
    
    for(int k = 31; k >= 0; k--)
    {
        if(x&(1<<k)) cout<< "1";
        else cout<<"0";
    }
}