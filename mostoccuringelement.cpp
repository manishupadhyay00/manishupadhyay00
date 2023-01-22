#include <bits/stdc++.h>
using namespace std;
  
int mostFrequent(int* arr, int n)
{
    // code here
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
  
    return element_having_max_freq;
}
  
// Driver program
int main()
{
    int arr[] = {98, 45, 67, 98, 45, 98, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFrequent(arr, n);
    return 0;
}