#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float pos=0;
    float neg=0;
    float zeroes=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
        if(arr[arr_i] > 0)
        {
            pos++;
        }
        else if(arr[arr_i] < 0)
        {
            neg++;
        }
        else if (arr[arr_i] == 0)
        {
            zeroes++;
        }
    }
    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << zeroes/n << endl;
    return 0;
}

