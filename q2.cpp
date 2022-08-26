// pratham bajaj
//2010990542
//test-04
//question-02

#include <iostream>
#include <unordered_set>
using namespace std;
 

bool isCtive(int arr[], int n)
{
   
    if (n <= 1) {
        return true;
    }
 
    int min = arr[0], max = arr[0];
 
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 
    
    if (max - min != n - 1) {
        return false;
    }
 
    
    unordered_set<int> visited;
 
    
    for (int i = 0; i < n; i++)
    {
        
        if (visited.find(arr[i]) != visited.end()) {
            return false;
        }
 
        
        visited.insert(arr[i]);
    }
 
    
    return true;
}
 
int main()
{
    int arr[] = { -1, 5, 4, 2, 0, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    isCtive(arr, n)? cout << "it contains consecutive integer":
                        cout << "it does not contain consecutive integers";
 
    return 0;
}

