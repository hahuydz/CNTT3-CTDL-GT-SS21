#include <stdio.h>

void initGraph(int graph[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            graph[i][j] = 0;
        }
    }
}
void addEdge(int graph[3][3], int startNode, int endNode) {
    graph[startNode][endNode] = 1;
}
void printGraph(int graph[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int graph[3][3];
    initGraph(graph);
    printGraph(graph);
    int startNode=1;
    int endNode=2;
    addEdge(graph, startNode, endNode);
    printGraph(graph);
    return 0;
}
