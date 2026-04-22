#include<iostream>
using namespace std;

void insertBinarySerach(int arr[], int n){
        for (int i = 1; i < n; i++)
        {
                int key= arr[i];
                int left =0, right =i-1;

                 
        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (arr[mid] < key)   
                right = mid - 1;
            else
                left = mid + 1;
        }
                for (int j = i -1; j >= left; j--)
                        {
                                arr[j+1]= arr[j];
                        }
                arr[left]= key;
                

        }
        

}
        
int main(){
        int n;
        cin >> n;
        int  arr[n];

        for (int i = 0; i < n; i++)
        {
                 cin >>arr[i] ;
        }

       
        insertBinarySerach(arr, n);


        for (int i = 0; i < n; i++)
        {
                 cout <<arr[i] << " " ;
        }
        


        return 0;
}