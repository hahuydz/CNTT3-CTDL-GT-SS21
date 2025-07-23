#include<stdio.h>

void initGraph(int graph[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            graph[i][j] = 0;
        }
    }
}
void addEdge(int graph[3][3], int i, int j) {
    graph[i][j] = 1;
    graph[j][i] = 1;
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
    addEdge(graph, 1,0);
    addEdge(graph,1,2);
    addEdge(graph,2,0);
    printGraph(graph);
}
