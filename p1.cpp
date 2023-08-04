// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node(int n){
//         data = n;
//         next = NULL;
//     }
// };

// int length(node* head){
//     int n = 0;
//     node* temp = head;
//     while (temp != NULL)
//     {
//         n++;
//         temp = temp->next;
//     }
//     return n;
// }

// void insertAtHead(node* &head , int d){
//     node* temp = head;
//     node* n = new node(d);
//     n->next = head;
//     head = n;
// }

// void insertInBetween(node* &head , int d , node* t){
//     node* n = new node(d);
//     node* f = t->next;
//     t->next = n;
//     n->next = f;
// }

// void insertAtTail(node* &head , int d){
//     node* temp = head;
//     node* n = new node(d);
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void deletion(node* &head , node* r ){
//     node* temp = head;
//     if (r == head)
//     {
//         node* x = head->next;
//         head = x ;
//         return;
//     }
    
//     while (temp -> next != r)
//     {
//         temp = temp->next;
//     }
//     node* n = r->next;
//     temp->next = n;
// }
// void display(node* head){
//     node* temp = head;
//     while (temp!= NULL)
//     {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;      
// }

// int main(){
//     node* head = new node(0);
//     node* l1 = new node(1);
//     node* l2 = new node(2);
//     node* l3 = new node(3);

//     head->next = l1;
//     l1->next = l2;
//     l2 ->next = l3;
//     // l3->next = NULL;
//     display(head);
//     // insertAtTail(head , 4);
//     // display(head);
//     // insertAtHead(head , -1);
//     // display(head);
//     // insertInBetween(head , 100 , l2);
//     // display(head);
//     // deletion(head , l2->next);
//     // display(head);
//     // deletion(head , head);
//     // display(head);
//     cout<<length(head);
//     return 0;
// }

// // #include<bits/stdc++.h>
// // using namespace std;

// // void merge(int arr[] , int l ,int mid ,int r){
// //     int n1 = mid - l + 1;
// //     int n2 = r - mid;
// //     int a[n1];
// //     int b[n2];

// //     for (int i = 0; i < n1; i++)
// //     {
// //         a[i] = arr[l+i];
// //     }
// //     for (int i = 0; i < n2; i++)
// //     {
// //         b[i] = arr[mid + 1 + i];
// //     }
// //     int i = 0 , j = 0;
// //     int k = l;
// //     while (i < n1 && j < n2)
// //     {
// //         if (a[i] < b[j])
// //         {
// //             arr[k] = a[i];
// //             k++;
// //             i++;
// //         }else
// //         {
// //             arr[k] = b[j];
// //             k++;
// //             j++;
// //         }
// //     }
// //     while (i < n1)
// //     {
// //         arr[k] = a[i];
// //         k++;
// //         i++;
// //     }
// //     while (j < n2)
// //     {
// //         arr[k] = b[j];
// //         k++;
// //         j++;
// //     }
    
// // }

// // void mergesort(int arr[] , int l , int r){
// //     if (l<r)
// //     {
// //         int mid = (l + r) / 2;
// //         mergesort(arr , l , mid);
// //         mergesort(arr , mid + 1, r);

// //         merge(arr , l , mid , r);
// //     }
    
// // }

// // int main(){
// //     int arr[] = {9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 10};
// //     mergesort(arr , 0 , 9);
// //     for (int i = 0; i < 10; i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
    
// //     return 0;
// // }

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

// Custom comparator function to sort based on the second element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a[0] > b[0]; // Change the index (1 in this case) to the desired element
}

int main() {
    std::vector<std::vector<int>> matrix = {{1, 4, 3}, {2, 3, 1}, {3, 1, 2}};

    // Sorting the matrix based on the second element of each sub-vector
    std::sort(matrix.begin(), matrix.end(), compare);

    // Printing the sorted matrix
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
