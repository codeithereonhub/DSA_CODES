
#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;
struct node* ptr;

int val;

void display() {
    ptr = start;

    while (ptr != NULL) {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }

    cout << "NULL";
}

void createnode() {
    cout << "Input value to insert: ";
    cin >> val;

    struct node* newnode =
        (struct node*)malloc(sizeof(struct node));

    if (newnode == NULL) {
        cout << "Memory allocation failed!";
        return;
    }

    newnode->data = val;
    newnode->next = NULL;

    if (start == NULL) {
        start = newnode;
    }
    else {
        ptr = start;

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }

        ptr->next = newnode;
    }
}

void deletebeg() {
    if (start == NULL) {
        cout << "\nList is empty!";
        return;
    }

    ptr = start;
    start = start->next;
    free(ptr);
}

int main() {
    int n;

    cout << "Number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        createnode();
    }

    cout << "\nExisting linked list is: ";
    display();

    cout << "\nAfter deletion from beginning: ";
    deletebeg();
    display();

    cout << "\n\nFreeing memory.....";

    ptr = start;

    while (ptr != NULL) {
        struct node* nextnode = ptr->next;
        free(ptr);
        ptr = nextnode;
    }

    start = NULL;

    return 0;
}
