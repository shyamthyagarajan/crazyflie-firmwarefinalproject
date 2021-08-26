#ifndef __CONTROLLER_AE483_H__
#define __CONTROLLER_AE483_H__

#include "stabilizer_types.h"

void controllerAE483Init(void);
bool controllerAE483Test(void);
void controllerAE483(control_t *control, setpoint_t *setpoint,
                                         const sensorData_t *sensors,
                                         const state_t *state,
                                         const uint32_t tick);

void ae483UpdateWithTOF(tofMeasurement_t *tof);
void ae483UpdateWithFlow(flowMeasurement_t *flow);


#endif //__CONTROLLER_AE483_H__
