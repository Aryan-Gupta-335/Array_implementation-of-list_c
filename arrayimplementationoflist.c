#include <stdio.h>
# define max 100
int i;
int addElement(int list[], int currentSize, int element) {
    if (currentSize < max) {
        list[currentSize] = element;
        currentSize++;
        printf("Element %d added to the list.\n", element);
    } else {
        printf("List is full! Cannot add more elements.\n");
    }
    return currentSize;  
}


int addatpositionElement(int list[], int currentSize, int element, int position) {
    if (currentSize >= max) {
        printf("List is full! Cannot insert element.\n");
        return currentSize;
    }
    if (position < 0 || position > currentSize) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", currentSize);
        return currentSize;
    }

    for ( i = currentSize; i > position; i--) {
        list[i] = list[i - 1];
    }
    list[position] = element;
    currentSize++;
    printf("Element %d inserted at position %d.\n", element, position);
    return currentSize;
}


int removeElement(int list[], int currentSize, int element) {
    int found = 0;
    for (i = 0; i < currentSize; i++) {
        if (list[i] == element) {
            found = 1;
            int j;
            for (j = i; j < currentSize - 1; j++) {
                list[j] = list[j + 1];
            }
            currentSize--;
            printf("Element %d removed from the list.\n", element);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the list.\n", element);
    }
    return currentSize;  
}

int removeposElement(int list[], int currentSize, int position) {
    if (position < 0 || position >= currentSize) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", currentSize - 1);
        return currentSize;
    }

    for ( i = position; i < currentSize - 1; i++) {
        list[i] = list[i + 1];
    }
    currentSize--;
    printf("Element at position %d removed from the list.\n", position);
    return currentSize;
}


void search(int list[], int currentSize, int element) {
    int found = 0;
    for ( i = 0; i < currentSize; i++) {
        if (list[i] == element) {
            printf("Element %d found at index %d.\n", element, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the list.\n", element);
    }
}








int main(){
int a[max];
int size=0;
printf("enter no of elements you want to enter");
scanf("%d",&size);
for(i=0;i<size;i++){
printf("enter %d element",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<size;i++){
printf(" %d element is %d",i+1,a[i]);
printf("\n");
}
int ch,value,position,x=1;
while (x==1){

printf("\n MENU \n");
printf("1 : add element to end of list\n");
printf("2 : insert at any position\n");
printf("3 : remove by passing value\n");
printf("4 : remove by passing position\n");
printf("5 : search\n");
printf("6 : display\n");
printf("7 : exit\n");
printf("enter choice");
scanf("%d",&ch);
switch (ch){
            case 1:
                printf("Enter element to add: ");
                scanf("%d", &value);
                size = addElement(a,size,value);
                break;
            case 2:
                printf("Enter element to add: ");
                scanf("%d", &value);
                printf("Enter position where to add: ");
                scanf("%d", &position);
                size = addatpositionElement(a,size,value,position);
                break;
            case 3:
                printf("Enter element to remove: ");
                scanf("%d", &value);
                size = removeElement(a,size,value);
                break;
            case 4:
                printf("Enter position to remove: ");
                scanf("%d", &position);
                size = removeposElement(a,size,position);
                break;
            case 5:
                printf("Enter element to search: ");
                scanf("%d", &value);
                search(a,size,value);
                break;
            case 6:
                printf("The required array is\n");
                for(i=0;i<size;i++){
printf(" %d element is %d\n",i+1,a[i]);
printf("\n");
}
                break;
            case 7:
                x=0;
               
}}
return 0;
}