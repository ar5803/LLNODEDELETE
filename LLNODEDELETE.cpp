// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *next;
// };
// //Case 1: deleting the first node in a given linked list
// struct Node* deletefirstnode(struct Node* head){
//     struct Node* ptr = head;
//     head = head -> next;
//     free(head);
//     return head;
// }
// //Case 2: deleting the element at a given index
// struct Node * deleteatgivenindex(struct Node *head,int index){
//     struct Node *p = head;
//     struct Node* q = p -> next;
//     int i=0;
//     while(i!=index-2){
//         p = p -> next;
//         q = q -> next;
//         i++;
//     }
//     p -> next = q -> next;
//     free(q);
//     return head;
// }
// void lltraversal(struct Node *ptr){
//     while(ptr!=NULL){
//         cout<<ptr->data<<endl;
//         ptr = ptr -> next;
//     }
// }

// //Case 2: 
// int main(){
//     struct Node* head = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* second = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* third = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

//     head -> data = 7;
//     head -> next = second;

//     second -> data = 11;
//     second -> next = third;

//     third -> data = 17;
//     third -> next = fourth;

//     fourth -> data = 18;
//     fourth -> next = NULL;
//     cout<<"LL before the first node deletion:\n";
//     lltraversal(head);
//     // head = deletefirstnode(head);
//     // cout<<"LL after deletion of first node:\n";
//     head = deleteatgivenindex(head,1);
//     lltraversal(head);
// }

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node * LLtraversal(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr -> next;
    }
}

struct Node* deletefirstnode(struct Node* head){
    struct Node* ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

struct Node* deletelastnode(struct Node* head,int size){
    struct Node * p = head;
    int i=1;
    while(i!=size-1){
        p = p -> next;
        i++;
    }
    p -> next = NULL;
    return head;
}

struct Node* deleteatindex(struct Node* head,int index){
    struct Node* p = head;
    struct Node* q = p-> next;
    int i=0;
    while(i!=index-2){
        p = p-> next;
        q = q -> next;
        i++;
    }
    p -> next = q -> next;
    free(q);
    return head;
}
struct Node * deleteatgivenindex(struct Node *head,int index){
    struct Node *p = head;
    struct Node* q = p -> next;
    int i=0;
    while(i!=index-2){
        p = p -> next;
        q = q -> next;
        i++;
    }
    p -> next = q -> next;
    free(q);
    return head;
}
int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 90;
    head -> next = second;

    second -> data = 56;
    second -> next = third;

    third -> data =98;
    third -> next = fourth;

    fourth -> data = 34;
    fourth -> next = NULL;
    head = deletefirstnode(head);
    // head = deletelastnode(head,4);
    // head = deleteatgivenindex(head,3);
    LLtraversal(head);
}