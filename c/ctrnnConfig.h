
#ifndef ctrnnConfig_h
#define ctrnnConfig_h

#ifdef __cplusplus 
extern "C" { 
#endif

#include <stdio.h>
#include <stdlib.h>
    
typedef struct ConfigNode {
    double gain;
    double bias;
    double t;
    double sineCoefficient;
    double frequencyMultiplier;
    double *weigths;
} ConfigNode;

typedef struct ConfigDesc {
    ConfigNode *iNodes;
    ConfigNode *hNodes;
    int numINodes;
    int numHNodes;
    int numONodes;
    char *tag;
} ConfigDesc;
    
typedef struct ConfigData {
    ConfigDesc *configDescriptions;
    int numConfigs;
    Boolean initialised;
} ConfigData;

void destroyConfigData(ConfigData *configData);

void initConfigDesc(ConfigDesc *configDesc, int numINodes, int numberHNodes, int numberONodes);

#ifdef __cplusplus 
}
#endif

#endif /* ctrnnConfig_h */
