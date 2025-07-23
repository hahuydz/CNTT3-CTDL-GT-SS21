#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;
Node*createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}
void addEdge(Node* graph[],int u,int v) {
    Node* nodeV=createNode(v);
    nodeV->next=graph[u];
    graph[u]=nodeV;
    Node* nodeU=createNode(u);
    nodeU->next=graph[u];
    graph[v]=nodeU;
}
void printGraph(Node* graph[]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" ");
        Node*temp = graph[i];
        if (temp==NULL) {
            printf("NULL");
        }else {
            while (temp!=NULL) {
                printf("%d ",temp->data);
                if (temp->next!=NULL) {
                    printf("->");
                }
                temp = temp->next;
            }
            printf("->NULL");
        }
        printf("\n");
    }
    printf("\n");
}
int main() {
    Node* graph[3] = {NULL};
    printGraph(graph);
    addEdge(graph,0,1);
    printGraph(graph);
    addEdge(graph,1,2);
    printGraph(graph);
    return 0;
}
