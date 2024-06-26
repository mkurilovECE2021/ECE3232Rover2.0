
// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include <xc.h> // include processor files - each processor file is guarded.  

void controller_rising_edge_interrupt(int* timer_status, int* channel, int* PPM_complete, int* PPM_channels);
void controller_main(int* PPM_complete, int* channel, int* timer_status);
int controller_normalize(int PPM_rollover);

#endif

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */