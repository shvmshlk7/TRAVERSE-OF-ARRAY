  #include<iostream>
using namespace std;

void findelement(int arr[], int size, int key)
{
    for (int i = 0; i<size; i++){
        if (arr[i] == key) {
            cout<<"Element found at position: "
                << (i + 1);
            break;
        }
    }
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 10;
    int key = 7;

    findelement(arr, n, key);

    return 0;
}
    
