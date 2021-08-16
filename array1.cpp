# include <iostream>
using namespace std;

int main()
{
  int n, arr[10];
  cout<<"Enter number of elements";
  cin>>n;
  
  cout<<"Enter elements";
  for( int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  
  cout<<"After removing duplicates";
  for(int  i =0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        while( j < n )
        {
          arr[j] = arr[j+1];
          j++;
        }
        --n;
      }
      else
      {
        continue;
      }
    }
  }
  for( int i = 0; i < n; i++)
  {
    cout<<arr[i];
  }
  return 0;
}
