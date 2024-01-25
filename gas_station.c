#include <stdio.h>
#include <math.h>

int gasStation(int *gas, int gasSize, int *cost, int costSize){
    if (sum(gas,gasSize) < sum(cost,costSize)){
        return -1;
    }
    int total = 0, res = 0;
    for(int i=0;i<gasSize;i++){
        total += gas[i] - cost[i];
        if (total < 0){
            total = 0;
            res = i + 1;
        }
    }
    return res;

}

int sum(int *arr, int size){
    int total = 0;
    for(int i=0;i<size;i++){
        total += arr[i];
    }
    return total;
}


int main(){
    int gas[] = {1,2,3,4,5};
    int cost[] = {3,4,5,1,2};
    int result = gasStation(gas, sizeof(gas)/ sizeof(gas[0]), cost, sizeof(cost) / sizeof(cost[0]));
    printf("%d\n", result);
    return 0;
}