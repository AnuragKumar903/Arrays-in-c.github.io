#include <stdio.h>

int main(){
  int arr[5];

  // taking input
  for(int i = 0; i < 5; i++){
    printf("Enter the %d element: ", i+1);
    scanf("%d", &arr[i]);
  }
  // printing array
  for(int i = 0; i < 5; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  //initializing a 2d array
  int arr2[3][2];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++)
      scanf("%d", &arr2[i][j]);
  }

  // printing a 2d array
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
      printf("%d ", arr2[i][j]);
    }
  }
    
}