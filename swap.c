#include <stdio.h>
#include <assert.h>
#include <stdlib.h> 

void swap_max(int a[], int l, int n){
int t = a[n], i, x;

for(i=n; i<l; i++){
    if(a[i]>=t){
        t = a[i];
        x = i;
    }
}

t = a[n];
a[n] = a[x];
a[x] = t;

}

void ssort(int a[], int l){

for(int i=0; i<l; i++)
  swap_max(a,l,i);  

}
