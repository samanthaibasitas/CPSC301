#include <iostream> 
using namespace std; 
void reverseArray(int[], int); 
int main() 
{
  int size; 
  cout << "input size of array" << endl; 
  cin >> size; 
  int array[size]; 
  for(int i = 0; i < size; i++)
  {
    cout << "input number to put into the array" << endl; 
    cin >> array[i]; 
   }
   reverseArray(array, size); 
   system("PAUSE"); 
   return 0; 
}
void reverseArrat(int array[], int size) 
{
  int temp; 
  for(int i = 0; i < (size/2); i++)
  {
    temp = array[i]; 
    array[i] = array[size-i-1]; 
    array[size-i-1] = temp; 
    cout << array[i] << endl; 
  }
}
