#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n) {
     int temp[n];
     int k = 0;
     for (int i = n - 1; i >= 0; i--)
     {
         temp[k] = arr[i];
         k++;
     }
     for (int i = 0; i < n; i++)
     {
         arr[i] = temp[i];
     }
 }
 int main()
 {
     int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
     int n = sizeof(arr) / sizeof(arr[0]); 
     reverse(arr, n);   
     for (int i = 0; i < n; i++)
     {
         cout << arr[i] << " ";
     }
     return 0;
 }
