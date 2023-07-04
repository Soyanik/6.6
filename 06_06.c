#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int queue[MAX_SIZE];
    int front = 0, rear = 0;

    printf("Enter elements (0 to stop):\n");

    while (1) {
        int x;
        scanf("%d", &x);

        if (x == 0) {
            break;
        }

        if ((rear + 1) % MAX_SIZE == front) {
            printf("Queue is full!\n");
            break;
        }

        queue[rear] = x;
        rear = (rear + 1) % MAX_SIZE;
    }

    if (front == rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements:\n");
        while (front != rear) {
            printf("%d ", queue[front]);
            front = (front + 1) % MAX_SIZE;
        }
        printf("\n");
    }

    return 0;
}
