#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

vector<int> subset;
int n = 3;
int countOfSubset = 0;

void search(int k)
{
    if(k == n+1)
    {
        countOfSubset++;
        cout<<countOfSubset<<"번째 부분집합 출력"<<endl;
        
        for (auto &i : subset)
        {
          cout<< i<<"-";
        }
        cout<<endl;
        cout<<endl;
    }
    else
    {
        // k를 부분집합에 포함시킨다.
        cout<<k<<"를 부분집합에 포함시킨다"<<endl;
        subset.push_back(k);
        cout<<"search("<<k+1<<")"<<endl;
        search(k+1);
        cout<<"subset 팝업 / k의 수 = "<<k<<endl;
        subset.pop_back();
        // k를 부분집합에 포함시키지 않는다.
        cout<<k<<"를 부분집합에 포함시키지 않고 search("<<k+1<<")실행"<<endl;
        search(k+1);
    }
}
int main(void)
{
    search(1);
    return 0;
}
