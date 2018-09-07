//
// Created by maesly on 07/09/18.
//

#ifndef PATHFINDING_PATH_H
#define PATHFINDING_PATH_H
#define ROW 9
#define COL 10
#include <bits/stdc++.h>
using namespace std;
class Path{
public:
    typedef pair<int, int> Pair;
    typedef pair<double, pair<int, int> > pPair;
    struct cell{
        int parent_i, parent_j;
        double f, g, h;
    };

    /**
     * @brief Verifica que el movimiento sea valido
     * @param row
     * @param col
     * @return
     */
    bool isValid(int row, int col);
    /**
     * @brief Verifica si alguna casilla de la cuadricula esta bloqueada
     * @param grid
     * @param row
     * @param col
     * @return
     */
    bool isUnBlocked(int grid[][COL], int row, int col);
    /**
     * @brief Verifica que sea el destino correcto
     * @param row
     * @param col
     * @param dest
     * @return
     */
    bool isDestination(int row,int col , Pair dest);
    /**
     * @brief Calcula el valor de H
     * @param row
     * @param col
     * @param dest
     * @return
     */
    double calculateHValue(int row, int col, Pair dest);
    /**
     * @brief
     * @param cellDetails
     * @param dest
     */
    void tracePath(cell cellDetails[][COL],Pair dest);
    /**
     * @brief Hace la funcion de pathfinding, en el que verifica cada movimiento
     * desde el punto de inicio al punto de destino
     * @param grid
     * @param src
     * @param dest
     */
    void aStarSearch(int grid[][COL], Pair src,Pair dest);
    /**
     * @brief Ejecuta el algoritmo de pathfinding
     * @return
     */
    int menu();

};
#endif //PATHFINDING_PATH_H
