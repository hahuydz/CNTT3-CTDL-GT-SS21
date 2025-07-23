#include<stdio.h>

void initGraph(int graph[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            graph[i][j] = 0;
        }
    }
}
void addEdge(int graph[4][4],int u,int v) {
    graph[u][v] =1;
    graph[v][u] = 1;
}
void printGraph(int graph[4][4]) {
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf(" ");
        for (int j = 0; j < 4; j++) {
            printf("%d ",graph[i][j]);
            if (j<4-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int graph[4][4];
    initGraph(graph);
    printGraph(graph);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    printGraph(graph);
}
