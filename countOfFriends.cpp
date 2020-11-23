//#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int friendList[] = {0, 1, 5, 2, 1, 7, 4, 5, 8};
//int friendList[] = {1, 2, 1, 1, 1, 1, 1, 1, 1};

int cnt = 0;

int GetCountOfFriends(int friendsList[], int arrCount)
{
    for (int i = 0; i < arrCount; i++)
    {   
        if(friendList[i] == 0)continue;
        if (friendsList[i] <= i && friendsList[i - friendsList[i]] != friendsList[i])
            cnt++;
        if (friendsList[i] < arrCount-i)
            cnt++;
    }
    return cnt;
}

int main(void)
{
    cout << "친구인 경우는 : " << GetCountOfFriends(friendList, sizeof(friendList)/sizeof(int)) << endl;
    return 0;
}