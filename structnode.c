#include <stdio.h>
#include<stdlib.h>

struct StudentNode {
    char *name;
    int roll_number;
    int marks;
    struct StudentNode *next;
};

struct StudentNode *createStudentNode(char *name, int roll_number, int marks) {
    struct StudentNode *node = (struct StudentNode *)malloc(sizeof(struct StudentNode));
    node->name = name;
    node->roll_number = roll_number;
    node->marks = marks;
    node->next = NULL;
    return node;
}

struct StudentNode *createLinkedList(struct StudentNode *head, char *name, int roll_number, int marks) {
    struct StudentNode *node = createStudentNode(name, roll_number, marks);
    if (head == NULL) {
        head = node;
    } else {
        node->next = head;
        head = node;
    }
    return head;
}

int main() {
    struct StudentNode *head = NULL;
    head = createLinkedList(head, "John Doe", 12345, 90);
    head = createLinkedList(head, "Jane Doe", 54321, 80);
    head = createLinkedList(head, "Mary Smith", 78901, 70);

    printf("The linked list:\n");
    struct StudentNode *current = head;
    while (current != NULL) {
        printf("Name: %s, Roll number: %d, Marks: %d\n", current->name, current->roll_number, current->marks);
        current = current->next;
    }

    return 0;
}