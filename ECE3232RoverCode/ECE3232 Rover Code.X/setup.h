

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef SETUP_H
#define	SETUP_H

#include <xc.h> // include processor files - each processor file is guarded.  

void setup();

#endif 


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */
