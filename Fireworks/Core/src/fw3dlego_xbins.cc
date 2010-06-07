// -*- C++ -*-
//
// Package:     Core
// Class  :     fw3dlego_xbins
// $Id: fw3dlego_xbins.cc,v 1.3 2009/09/05 10:51:35 dmytro Exp $
#include "Fireworks/Core/interface/fw3dlego_xbins.h"

// Information is extracted from:
// CERN/LHCC 2006-001
// CMS Physics TDR Vol1
// CMS TDR 8.1
// 02 February 2006
// Chapter 5, Table 5.1

namespace fw3dlego
{
   const int    xbins_n = 83;
   const double xbins[xbins_n] = {
      -5.191, -4.889,
      -4.716, -4.538, -4.363, -4.191, -4.013, -3.839, -3.664, -3.489, -3.314,
      -3.139, -2.964, -2.853, -2.650, -2.500, -2.322, -2.172, -2.043, -1.930, -1.830,
      -1.740, -1.653, -1.566, -1.479, -1.392, -1.305, -1.218, -1.131, -1.044, -0.957,
      -0.870, -0.783, -0.696, -0.609, -0.522, -0.435, -0.348, -0.261, -0.174, -0.087,
      0.000,
      0.087,  0.174,  0.261,  0.348,  0.435,  0.522,  0.609,  0.696,  0.783,  0.870,
      0.957,  1.044,  1.131,  1.218,  1.305,  1.392,  1.479,  1.566,  1.653,  1.740,
      1.830,  1.930,  2.043,  2.172,  2.322,  2.500,  2.650,  2.853,  2.964,  3.139,
      3.314,  3.489,  3.664,  3.839,  4.013,  4.191,  4.363,  4.538,  4.716,
      4.889,  5.191
   };

   const int    xbins_hf_n = 28;
   const double xbins_hf[xbins_hf_n] = {
      -5.205, -4.903, -4.730, -4.552, -4.377, -4.204, -4.027,
      -3.853, -3.677, -3.503, -3.327, -3.152, -2.976, -2.866,
       2.866,  2.976,  3.152,  3.327,  3.503,  3.677,  3.853,
       4.027,  4.204,  4.377,  4.552,  4.730,  4.903,  5.205
   };
}

