
#ifndef SDV_PRE_RUN
#include "..\..\sdv-pre-results.h"
#if (startioroutine_SDV_RESULT == SDV_FAILED || dispatchroutine_SDV_RESULT == SDV_FAILED)
  #define SDV_HARNESS SDV_FLAT_SIMPLE_HARNESS_WITH_NO_DEVICE_IRPS
#else
  #pragma message("SDV_NA")  
#endif
#else
#pragma message("startioroutine==SDV_FAILED")
#pragma message("dispatchroutine==SDV_FAILED")
#endif
