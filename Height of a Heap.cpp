#include <bits/stdc++.h>
using namespace std;
 
int height(int N)
{
    return floor(log2(N));
}
 
// driver node
int main()
{
    int N = 2;
    cout << height(N);
    return 0;
}

//Time complexity  O(1)
//space Complexity  O(1)
