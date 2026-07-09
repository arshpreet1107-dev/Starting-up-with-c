#include <stdio.h>

int arr1[40]={1,2,3,4,5,6,7,8,9};
int n=9; //existing elements in arr1
int arr2[7]={10,11,12,13,14,15,16};
int j=7; //elements in arr2
int arr3[16]={0};
int g=16; //elements to be in merged array

void insert(int po , int value){
    int i;
    for(i=n;i>po;i--){
        arr1[i]=arr1[i-1];
    }
    arr1[po]=value;
    n+=1; 
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}
void del(int p){
for (int i = p; i < n - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    n-=1;
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}
void trav(){
    
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}
void rev(){
    
    for(int i=n-1;i>=0;i--){
       printf("%d ",arr1[i]);
    }
    
    }
void merge()
{   printf("\nARRAY 1:");
    for (int i=0;i<9;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nARRAY 2:");
    for (int m=0;m<7;m++){
        printf("%d ",arr2[m]);
        }

    int l=0,k=0,r=0;
    while(l<n&&k<j){

        if(arr1[l]<arr2[k]){
            arr3[r]=arr1[l];
            l++;
            r++;
        }
        else{
            arr3[r]=arr2[k];
            k++;
            r++;
        }
    }
    while (l<n){
        arr3[r]=arr1[l];
        l++;
        r++;
    }
    while (k<j){
        arr3[r]=arr2[k];
        k++;
        r++;
    }

    printf("\nMERGED ARRAY :");
    for(int i=0;i<g;i++){
        printf("%d ",arr3[i]);
    }
}



int main(){
    n=9 ; //existing elements
    printf("Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    int choice=0; 
        while(choice<=5){
            printf("\n____MENU____");
            printf("\n 1.Insertion");
            printf("\n 2.Deletion");
            printf("\n 3.Traversal");
            printf("\n 4.Reverse");
            printf("\n 5.Merge\n");
            scanf(" %d",&choice);

            if(choice==1){
            int p, v; 
                printf("\nEnter position to insert: ");
                scanf("%d", &p);
                printf("\nEnter value to insert: ");
                scanf("%d", &v);
                insert(p,v);
            }
            else if(choice==2){
                int p; 
                printf("\nEnter position to delete: ");
                scanf("%d", &p);
                del(p);
            }
            else if(choice==3)
                trav();
            else if(choice==4)
                rev();
            else if(choice==5)
                merge();
        }
return 0;
}

