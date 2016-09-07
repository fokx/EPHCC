/*
 * sel751test_model_1_1_sm_system_data.c
 *
 * Code generation for model "sel751test_model_1_1_sm_system".
 *
 * Model version              : 1.2542
 * Simulink Coder version : 8.4 (R2013a) 13-Feb-2013
 * C source code generated on : Tue Aug 23 11:24:18 2016
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "sel751test_model_1_1_sm_system.h"
#include "sel751test_model_1_1_sm_system_private.h"

/* Block parameters (auto storage) */
P_sel751test_model_1_1_sm_system_T sel751test_model_1_1_sm_system_P = {
  0.0,
  1.0,
  1.0,
  0.0,
  1.0,
  1.0,
  0.0,
  0.5,
  0.0,
  0.5,
  0.0,
  0.0,

  { 1.72, 2.35 },

  { 3.8462142509383881, 0.0, 0.0, 0.0, -3.3766274559075269, 0.0,
    2.3399572663989887, -1.7279885257926626, -0.23622315052970863, 0.0, 0.0,
    -1.7279885257926626, 1.7878680503138293, -0.023113811206429354, 0.0, 0.0,
    -0.23622315052970863, -0.023113811206429354, 0.26436298621549348, 0.0,
    -3.3766274559075269, 0.0, 0.0, 0.0, 3.4747852307885596 },
  1.72,
  2.35,
  1.72,

  { 20.0, 4.1806020066889635 },

  { 20.0, 4.1806020066889635, 0.0 },
  1.72,

  { 0.0, 1.0 },

  { 0.0, 1.0 },
  1.72,

  { 20.0, 1.9569471624266144, 0.26752273943285182 },

  { 20.0, 0.26752273943285182, 1.9569471624266144 },
  2.35,

  { 0.0, 1.0 },

  { 0.0, 1.0 },
  2.35,

  { 0.008979, 0.0, 0.0, 0.0, 0.0, 0.0, 0.008979, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.00206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2826, 0.0, 0.0, 0.0, 0.0, 0.0, 0.02545 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 0.05, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05, 0.0, 0.0, 0.0, 0.0, 0.0, 0.511, 0.0,
    0.0, 0.0, 0.0, 0.0, 3.738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2392 },

  { 0.034535157759175782, 0.0, 0.0, 0.0, -0.085935168752846555, 0.0,
    0.021010476294996517, -0.0035596563631328853, -0.066756662339695669, 0.0,
    0.0, -0.015515608973092315, 0.0036830081836464888, -0.0065319630469369361,
    0.0, 0.0, -0.0021210476686062537, -4.7614451085244476E-5,
    0.074708979904498457, 0.0, -0.030318737926593682, 0.0, 0.0, 0.0,
    0.088433284123568837 },

  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 },
  0.037699111843077518,
  0.0,
  0.5,
  -1.0,

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.037699111843077518,
  0.0,
  1.0,
  0.0,
  1.0,
  -0.0016666666666667045,
  0.0003333333333333523,
  -0.0016666666666667045,
  0.0003333333333333523,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.001,
  0.0,
  0.0003333333333333523,
  -0.0016666666666667045,
  0.5,
  0.5,
  1.0,

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },
  0.66666666666666663,
  2.0,
  1.0,
  2.0,
  5.0E-5,
  0.0,
  1.0E+6,
  2.2204460492503131E-16,
  0.0001,

  { 1.0, 1.0 },
  0.022322222222222222,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.016666666666666666,
  1.0,
  5.0E-5,
  0.0,
  1.0E+6,
  2.2204460492503131E-16,
  0.0001,

  { 1.0, 1.0 },
  0.022322222222222222,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.016666666666666666,
  0.0,
  0.0,
  2.2204460492503131E-16,
  57.295779513082323,
  0.5,
  0.0003333333333333523,
  -0.0016666666666667045,
  0.0003333333333333523,
  -0.0016666666666667045,
  2.0,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  -0.037690182669934541,
  0.9992894726405892,
  5.0E-5,
  0.0,
  0.0167,

  { 1.0, 1.0 },
  0.0169,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  60.0,
  0.0,
  0.0,
  2.0,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  0.9992894726405892,
  0.037690182669934694,
  5.0E-5,
  0.0,
  0.0167,

  { 1.0, 1.0 },
  0.0169,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  60.0,
  0.0,
  0.0,
  57.295779513082323,
  0.70710678118654746,
  -0.0016666666666667045,
  0.0003333333333333523,
  5.0E-5,
  0.0,
  0.0167,

  { 1.0, 1.0 },
  0.0169,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  60.0,
  14400.0,
  0.0,
  0.0,
  -1.0,
  0.0,
  0.0,
  0.0,
  0.001,
  0.0,
  0.0003333333333333523,
  -0.0016666666666667045,
  0.5,
  0.5,
  1.0,

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },
  0.66666666666666663,
  2.0,
  1.0,
  2.0,
  5.0E-5,
  0.0,
  1.0E+6,
  2.2204460492503131E-16,
  0.0001,

  { 1.0, 1.0 },
  0.022322222222222222,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.016666666666666666,
  1.0,
  5.0E-5,
  0.0,
  1.0E+6,
  2.2204460492503131E-16,
  0.0001,

  { 1.0, 1.0 },
  0.022322222222222222,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.016666666666666666,
  0.0,
  0.0,
  2.2204460492503131E-16,
  57.295779513082323,
  0.5,
  0.0003333333333333523,
  -0.0016666666666667045,
  0.0003333333333333523,
  -0.0016666666666667045,
  2.0,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  -0.037690182669934541,
  0.9992894726405892,
  5.0E-5,
  0.0,
  0.0167,

  { 1.0, 1.0 },
  0.0169,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  60.0,
  0.0,
  0.0,
  2.0,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  0.9992894726405892,
  0.037690182669934694,
  5.0E-5,
  0.0,
  0.0167,

  { 1.0, 1.0 },
  0.0169,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  60.0,
  0.0,
  0.0,
  57.295779513082323,
  0.70710678118654746,
  -0.0016666666666667045,
  0.0003333333333333523,
  5.0E-5,
  0.0,
  0.0167,

  { 1.0, 1.0 },
  0.0169,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  60.0,
  14400.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.5,
  180.0,
  0.0,
  4.0,
  15.0,
  0.1,
  0.125,
  0.8,
  0.5,
  0.5,
  1.0,
  2.0,
  5.0E-5,
  0.0,
  1.0E+6,
  1.0E-6,
  0.0001,
  0.0,
  0.016666666666666666,
  0.0,
  1.0,
  1.0,
  0.5,
  5.0E-5,
  0.0,
  1.0E+6,
  1.0E-6,
  0.0001,
  0.0,
  0.016666666666666666,
  0.0,
  1.0,
  0.0,
  0.5,
  57.295779513082323,
  2.0,
  0.01,
  0.5,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0001,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  7.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  4.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  4.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  10.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,
  0.0,
  1.0,
  0.0,
  0.0001,
  5517.2413793103451,
  400000.0,
  0.0,
  1.25E-6,
  0.0,
  0.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,
  20.0,
  0.0,
  0.0,

  { 0.0069552863617617106, 0.014587901014631248, -0.0057896483056441538,
    -0.056861876528372622, -0.059476680260783142, 0.076118200884714562,
    0.29579154768342669, 0.40638624201187618, 0.29579154768342669,
    0.076118200884714562, -0.059476680260783142, -0.056861876528372622,
    -0.0057896483056441538, 0.014587901014631248, 0.0069552863617617106 },

  { 1.0, 1.0 },
  214.0,

  { 214.0, 1.0 },

  { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 2.0, 0.0, 0.0, 1.0, 2.0, 2.0,
    2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 25.0, 0.0, 0.0, 0.1, 0.2, 0.3, 0.05,
    0.15, 0.25, 0.35, 0.1, 0.2, 0.3, 0.4, 0.15, 0.25, 0.35, 0.45, 0.2, 0.3, 0.4,
    0.5, 0.25, 0.35, 0.45, 0.55, 0.3, 0.4, 0.5, 0.6, 0.3, 0.4, 0.5, 0.6, 0.0,
    0.1, 0.2, 0.3, 0.05, 0.15, 0.25, 0.35, 0.1, 0.2, 0.3, 0.4, 0.15, 0.25, 0.35,
    0.45, 0.2, 0.3, 0.4, 0.5, 0.25, 0.35, 0.45, 0.55, 0.3, 0.4, 0.5, 0.6, 0.3,
    0.4, 0.5, 0.6, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 10000.0, 9500.0, 9000.0, 8500.0, 8000.0,
    7500.0, 7000.0, 6500.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 6000.0,
    5500.0, 5000.0, 4500.0, 4000.0, 3500.0, 3000.0, 2500.0, 0.1, 0.2, 0.3, 0.4,
    0.5, 0.6, 0.7, 0.8, 1.0, 0.1, 0.0, 10.0, 0.5, 0.0, 10.0, 0.0, 0.0, 0.0, 15.0,
    0.0, 10.0, 2.0 },
  0.0,
  0.5,
  0.044,
  0.0001,
  0.0,
  376.99111843077515,

  { -0.0, 0.0, 0.0, 0.0, -0.0 },
  0.0,
  0.0,
  0.5,
  1.0,
  0.0001,
  -0.99,
  0.0,
  0.0001,

  { -1.0, -1.0, 1.0, 1.0, 1.0 },

  { 0.80768928745308055, 0.16883137279537638 },

  { 0.88300213668005034, 0.086399426289633111, 0.011811157526485426 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0 },
  207.08246617732181,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1000.0,
  500.0,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  100.0,
  0.0001,
  0.0,
  -0.0,
  0.0001,
  0.0,
  100.0,
  0.0001,
  0.0,
  6.2831853071795862,
  0.0,
  0.0,
  1000.0,
  500.0,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  100.0,
  0.0001,
  0.0,
  -0.0,
  0.0001,
  0.0,
  100.0,
  0.0001,
  0.0,
  6.2831853071795862,
  11267.652816802622,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  -0.037690182669934541,
  0.9992894726405892,
  11267.652816802622,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  -0.84656497770613792,
  -0.53228539198573366,
  11267.652816802622,
  0.0,
  376.99111843077515,
  0.037690182669934541,
  0.9992894726405892,
  0.88425516037607244,
  -0.46700408065485521,
  0.0,
  1.0,
  2.0,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  6.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  0.0001,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,
  1.0,
  0.5,
  1.0,

  { -1.0, 0.0, 0.016666666666666666, 0.016666666666666666, 0.083333333333333329,
    0.083333333333333329, 1.0833333333333333 },

  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 },
  0.5,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,
  8.8749628361709345E-5,
  0.0,
  0.5,
  57.295779513082323,
  1.0,
  1.0,

  { 1.0, 1.0, 1.0, 1.0, 1.0, 2.35, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0 },
  0.025,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  10.0,
  1.15,
  0.85,
  0.2,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  10.0,
  1.15,
  0.85,
  0.025,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  10.0,
  1.15,
  0.85,
  0.5,
  0.5,
  0.0,
  0.5,
  5.0E-5,
  -5.0E-5,
  0.0,
  1.0,

  { 1.0, -1.0 },
  1.0,
  0.0001,
  0.0,
  57.295779513082323,
  1.0,
  3.0,
  0.0001,
  0.0,
  1.05,
  0.0,
  1.0,
  0.0,
  0.0001,
  0.047619047619047616,
  0.0,
  0.0,
  111.1111111111111,
  0.0,
  0.001,
  0.0,
  47133.0,
  100.0,
  0.00028571428571428574,
  1.5,
  -1.5,
  0.0,
  1.0,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  100.0,
  5.0,
  -5.0,
  0.5,
  5.0E-5,
  -5.0E-5,
  0.0,
  0.0,
  0.0,

  { 0.0069552863617617106, 0.014587901014631248, -0.0057896483056441538,
    -0.056861876528372622, -0.059476680260783142, 0.076118200884714562,
    0.29579154768342669, 0.40638624201187618, 0.29579154768342669,
    0.076118200884714562, -0.059476680260783142, -0.056861876528372622,
    -0.0057896483056441538, 0.014587901014631248, 0.0069552863617617106 },
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  1.388888888888889E-6,
  20.0,
  0.047619047619047616,
  7936.5079365079364,
  0.56818181818181823,
  0.00473,
  2.75,
  0.0,
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  4.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  6.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,
  1.0,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 18.0 },

  { 67.0, 72.0, 80.0, 95.0, 115.0, 108.0, 97.0, 118.0, 101.0, 95.0, 99.0, 102.0,
    103.0, 46.0, 111.0, 112.0, 97.0, 108.0 },
  1.0,
  0.5,
  0.0,
  0.0001,
  0.0,
  100.0,
  0.01,
  0.0001,
  0.0,
  100.0,
  20.0,
  0.0,
  0.0,

  { -0.88857658763167313, -0.62831853071795862, 0.62831853071795862 },
  0.62831853071795862,
  1.0,
  0.0,
  1.0,
  10.0,
  0.0,
  0.5,
  1.0,
  1.0,
  1.0,
  1799.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 12.0 },

  { 72.0, 101.0, 97.0, 116.0, 76.0, 111.0, 97.0, 100.0, 46.0, 109.0, 97.0, 116.0
  },

  { 1.0, 2.0 },

  { 46.0, 92.0 },

  { 1.0, 2.0 },

  { 46.0, 47.0 },

  { 1.0, 1.0 },
  0.0001,
  0.5,
  0.0013312034078807242,
  0.0013312034078807242,
  0.0013312034078807242,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,
  0.0013312034078807242,
  0.02,
  1800.0,
  0.5,

  { 1.0, 1.0 },
  10.0,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  10.0,

  { 1.0, 1.0 },
  2.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0001,
  5.0,
  1800.0,
  0.5,

  { 1.0, 1.0 },
  10.0,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  10.0,

  { 1.0, 1.0 },
  2.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0001,
  5.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  2.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,
  6.2831853071795862,
  5.0,
  6.2831853071795862,
  5.0,
  0.053657142857142862,
  0.053657142857142862,
  0.1878,
  0.0065166666666666663,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  3.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,
  0.0,
  0.0,
  0.951219512195122,
  0.97560975609756106,
  0.048780487804878057,
  0.024390243902439029,
  0.0,
  0.0,
  -0.9999999600000008,
  1.9999999600000007E-8,
  1.0,
  0.0,
  200.0,
  0.951219512195122,
  0.97560975609756106,
  0.048780487804878057,
  0.024390243902439029,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  5.0,
  1.0,
  -0.99960007998400313,
  0.00019996000799840031,
  1.9996000799840032,
  0.99980003999200162,
  0.0,
  0.0,
  -0.9999999600000008,
  1.9999999600000007E-8,
  -1.9999999600000007,
  1.9999999656405976E-8,
  0.0,
  0.00028571428571428574,
  0.0001,
  1.0471975511965976,
  0.0,
  0.0,
  0.01,
  0.0,
  0.001,
  19.25,
  0.0053051647697298452,
  3.0056173526140153E+6,
  3.0056173526140153E+6,
  4.5875212224108661E+6,
  900.0,
  0.030241935483870965,
  3.0,
  1.0,
  7936.5079365079364,
  0.00087659574468085114,

  { 0.0, 0.0 },
  1.0,
  0.009238,
  1.441753171856978,
  376.99111843077515,
  376.99111843077515,
  1.0,
  1.0,
  1.5,
  1.0,
  1.0,
  1.0,
  0.0,
  0.0,
  0.5,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  -1.0,

  { 1.0, 1.0 },
  -1.0,

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  5.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  9.0,

  { 1.0, 1.0 },
  64.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 8.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 1.0, 1.0 },
  8.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  10.0,

  { 1.0, 1.0 },
  64.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  2.0,

  { 1.0, 8.0 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  { 1.0, 1.0 },
  8.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 1.0, 1.0 },
  7.0,

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  4.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 1.0, 1.0 },
  8.0,

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  32.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  4.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 0.0, 0.0 },

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  2.0,

  { 1.0, 1.0 },
  16.0,

  { 1.0, 1.0 },
  8.0,

  { 1.0, 1.0 },
  8.0,
  1.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 1.0, 1.0 },
  11.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  1.0,

  { 1.0, 6.0 },

  { 79.0, 112.0, 67.0, 116.0, 114.0, 108.0 },

  { 1.0, 1.0 },
  12.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.57735026918962584,
  0.0,
  5.0E-5,
  0.0,
  0.0167,
  0.0,
  60.0,
  0.016666666666666666,
  0.0,
  1.0,
  0.5,
  0.001,
  8.8749628361709345E-5,
  0.0,
  0.0001,
  0.0,
  1.0,
  0.0,
  0.5,
  0.0001,
  0.0,
  6.2831853071795862,
  0.0,
  0.0,
  0.5,
  0.0,
  1.0,
  -1.0,
  0.0,
  1.0,
  -1.0,
  0.5,
  0.0,
  0.0001,
  0.0,
  1000.0,
  -1000.0,
  1.0,
  0.0,
  0.0001,
  0.0,
  0.017453292519943295,
  0.0,
  0.0001,
  0.0,
  0.0,
  0.0001,
  0.0,
  0.5,
  0.0,
  0.0,
  1.0,
  0.0001,
  -1.0,
  0.0001,
  1.0,
  5.0E-5,
  0.0,
  60.0,
  1.0E+6,
  1.0E-6,
  0.0001,
  0.0,
  0.016666666666666666,
  0.0,
  1.0,
  0.0,
  0.5,
  1.0,
  180.0,
  0.0001,
  376.99111843077515,
  10000.0,
  0.0,
  1.0,
  10000.0,
  0.0,
  10000.0,
  0.0,
  0.15915494309189535,
  60.0,
  0.0012000000000000001,
  -0.0012000000000000001,

  { 0.977912228775521, -2.4401514047614183, 9.8895611438776042E-5,
    0.99987799242976183 },

  { 0.98895611438776054, 4.9447805719388021E-5 },

  { 0.0001220075702380709, 2.4672505794658162 },
  6.100378511903545E-5,

  { 0.0, 24.317084074161063 },
  3200.0,
  2000.0,
  -2000.0,
  277.12025864557472,
  1.5,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.57735026918962584,
  5.0E-5,
  0.0,
  0.0167,
  60.0,
  0.0,
  0.016666666666666666,
  0.0,
  1.0,
  0.0,
  0.5,
  0.001,
  1.0,
  1.0,
  0.0,
  1.0,
  60.0,
  1.0,
  1.0,
  1.0,
  1.0,

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },
  0.66666666666666663,
  2.0,
  1.0,
  2.0,
  5.0E-5,
  0.0,
  1.0E+6,
  2.2204460492503131E-16,
  0.0001,

  { 1.0, 1.0 },
  0.022322222222222222,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.016666666666666666,
  0.0,

  { 1.0, -1.0 },

  { 0.0001, 0.0 },
  0.0,
  0.5,
  376.99111843077515,
  0.0,
  0.0,
  180.0,
  0.0,
  0.0,
  0.15915494309189535,
  0.0012000000000000001,
  -0.0012000000000000001,
  60.0,
  24.316084080329627,
  0.99987798744008671,
  -3.5527136788005009E-15,
  9.88955888569418E-5,
  -2.4402511982646002,
  0.97791177713757171,
  4.9447794428503222E-5,
  0.98895588856878591,
  6.100627995669388E-5,
  2.4673520384697278,
  0.00012201255991338776,
  1.0,
  2000.0,
  -2000.0,
  265.57358120200911,
  1.5,
  0.5,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.57735026918962584,
  5.0E-5,
  0.0,
  0.0167,
  60.0,
  0.0,
  0.016666666666666666,
  0.0,
  1.0,
  0.0,
  0.5,
  0.001,
  1.0,
  1.0,
  0.0,
  1.0,
  60.0,
  1.0,
  1.0,
  1.0,
  1.0,

  { 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5
  },
  0.66666666666666663,
  2.0,
  1.0,
  2.0,
  5.0E-5,
  0.0,
  1.0E+6,
  2.2204460492503131E-16,
  0.0001,

  { 1.0, 1.0 },
  0.022322222222222222,

  { 1.0, 1.0 },
  0.0001,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 1.0 },
  1.0,
  0.0,
  0.016666666666666666,
  0.0,

  { 1.0, -1.0 },

  { 0.0001, 0.0 },
  0.0,
  0.5,
  376.99111843077515,
  0.0,
  0.0,
  180.0,
  0.0,
  0.0,
  0.15915494309189535,
  0.0012000000000000001,
  -0.0012000000000000001,
  60.0,
  24.316084080329627,
  0.99987798744008671,
  -3.5527136788005009E-15,
  9.88955888569418E-5,
  -2.4402511982646002,
  0.97791177713757171,
  4.9447794428503222E-5,
  0.98895588856878591,
  6.100627995669388E-5,
  2.4673520384697278,
  0.00012201255991338776,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1799.0,
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  1.0,

  { 1.0, 1.0 },
  0.0,

  { 1.0, 16.0 },

  { 111.0, 110.0, 101.0, 95.0, 109.0, 105.0, 110.0, 95.0, 100.0, 97.0, 116.0,
    97.0, 46.0, 109.0, 97.0, 116.0 },

  { 1.0, 2.0 },

  { 46.0, 92.0 },

  { 1.0, 2.0 },

  { 46.0, 47.0 },

  { 1.0, 1.0 },
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.57735026918962584,
  0.0,
  5.0E-5,
  0.0,
  0.0167,
  0.0,
  60.0,
  0.016666666666666666,
  0.0,
  1.0,
  0.5,
  0.001,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  8,
  0,
  4,
  0,
  2,
  0,
  1,
  0,
  8,
  0,
  4,
  0,
  2,
  0,
  1,
  0,
  0U,
  0,
  0,
  1,
  0,
  0,
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  1,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  1,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  1,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  1,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,
  0,
  0,
  1,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,
  0,
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  1,
  1
};