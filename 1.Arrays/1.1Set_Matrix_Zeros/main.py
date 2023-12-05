def zeroMatrix(matrix, n, m):
    col0 = 1

    for i in range(n):
        for j in range(m):
            if matrix[i][j] == 0:
                matrix[i][0] = 0
                if j != 0:
                    matrix[0][j] = 0
                else:
                    col0 = 0
    
    for i in range(1, n):
        for j in range(1, m):
            if matrix[i][0] == 0  or matrix[0][j] == 0:
                matrix[i][j] = 0

    if matrix[0][0] == 0:
        for j in range(m):
            matrix[0][j] = 0
    
    if col0 == 0:
        for i in range(n):
            matrix[i][0] = 0
    
    return matrix

if __name__ == "__main__":
    matrix = [[1,2,3,4],[5,0,7,8],[0,10,11,12],[13,14,15,0]]
    n = len(matrix)
    m = len(matrix[0])
    ans = zeroMatrix(matrix, n , m)
    print(ans)