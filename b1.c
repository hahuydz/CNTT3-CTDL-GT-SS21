#include<stdio.h>

void printGraph(int graph[3][3]) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d\t",graph[i][j]);
        }
        printf("\n");
    }
}
void addEdge(int graph[3][3],int firstNode,int secondNode) {
    graph[firstNode][secondNode]=1;
    graph[secondNode][firstNode]=1;
}
int main() {
    int graph[3][3];
    printf("Ban dau : ");
    printGraph(graph);
    int firstNode=1;
    int secondNode=2;
    addEdge(graph,firstNode,secondNode);
    printf("Sau khi them canh la: ");
    printGraph(graph);
    return 0;
}
