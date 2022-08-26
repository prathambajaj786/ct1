// pratham bajaj
//2010990542
//test-04
//question-01


#include <iostream>
#include <unordered_set>
using namespace std;
 
int FMI(int arr[], int n)
{
    int minI = n;
 
    
    unordered_set<int> set;
 
    
    for (int i = n - 1; i >= 0; i--)
    {
        
        if (set.find(arr[i]) != set.end()) {
            minI = i;
        }
        
        else {
            set.insert(arr[i]);
        }
    }
 
    
    if (minI == n) {
        cout<<"Invalid Output";
        return 0;
    }
 
    
    return minI;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    int minI = FMI(arr, n);
 
    if(minI == 0){
        return 0;
    }
    else if (minI != n) {
        cout << "The minimum index of the repeating element is " << minI;
    }
   
 
    return 0;
}
