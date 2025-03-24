#ifndef FSI_H_
#define FSI_H_

#include "udf.h"
#include "dynamesh_tools.h"

void fsi_init(Domain* domain);
void fsi_write_and_advance();
void fsi_grid_motion(Domain* domain, Dynamic_Thread* dt, real time, real dtime);
void fsi_plot_coords();


// Edited
// #include <stdbool.h>
// int precicec_getMeshID(const char* meshName);
// int precicec_getDataID(const char* dataName, int meshID);
// void precicec_readBlockVectorData(int dataID, int size, int* vertexIDs, double* values);
// void precicec_writeBlockVectorData(int dataID, int size, int* vertexIDs, double* values);
// int precicec_actionWriteIterationCheckpoint();
// int precicec_actionReadIterationCheckpoint();
// bool precicec_isActionRequired(int action);
// void precicec_markActionFulfilled(int action);
// bool precicec_isWriteDataRequired(double computedTimeStepSize);
// void precicec_createSolverInterface(const char* solverName, const char* configFileName, int solverProcessIndex, int solverProcessSize);


#endif /* FSI_H_ */
