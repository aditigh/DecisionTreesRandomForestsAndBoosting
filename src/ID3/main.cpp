#include "id3.cpp"
#include<fstream>


int main(int argc,char *argv[]){
    char *pathDataTrain= "../../Data/trainDataDisc.txt";
    char *pathLabelTrain="../../Data/trainOutput.txt";

    
    int NumberOfInstances=32561;
    int NumberOfFeatures=14;
    DecisionTree dt= DecisionTree(pathDataTrain,pathLabelTrain,NumberOfInstances,NumberOfFeatures);
    
    
    
    return 0;
}