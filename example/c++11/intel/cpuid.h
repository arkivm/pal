

#include "pal/instruction/cpuid.h"

#include "pal/cpuid/leaf_01_eax.h"
#include "pal/cpuid/leaf_01_ebx.h"
#include "pal/cpuid/leaf_01_ecx.h"
#include "pal/cpuid/leaf_01_edx.h"

#include "pal/cpuid/leaf_02_eax.h"
#include "pal/cpuid/leaf_02_ebx.h"
#include "pal/cpuid/leaf_02_ecx.h"
#include "pal/cpuid/leaf_02_edx.h"

#include "pal/cpuid/leaf_03_eax.h"
#include "pal/cpuid/leaf_03_ebx.h"
#include "pal/cpuid/leaf_03_ecx.h"
#include "pal/cpuid/leaf_03_edx.h"

#include "pal/cpuid/leaf_04_eax.h"
#include "pal/cpuid/leaf_04_ebx.h"
#include "pal/cpuid/leaf_04_ecx.h"
#include "pal/cpuid/leaf_04_edx.h"

#include "pal/cpuid/leaf_05_eax.h"
#include "pal/cpuid/leaf_05_ebx.h"
#include "pal/cpuid/leaf_05_ecx.h"
#include "pal/cpuid/leaf_05_edx.h"

#include "pal/cpuid/leaf_06_eax.h"
#include "pal/cpuid/leaf_06_ebx.h"
#include "pal/cpuid/leaf_06_ecx.h"
#include "pal/cpuid/leaf_06_edx.h"

#include "pal/cpuid/leaf_07_eax.h"
#include "pal/cpuid/leaf_07_ebx.h"
#include "pal/cpuid/leaf_07_ecx.h"
#include "pal/cpuid/leaf_07_edx.h"

#include "pal/cpuid/leaf_09_eax.h"
#include "pal/cpuid/leaf_09_ebx.h"
#include "pal/cpuid/leaf_09_ecx.h"
#include "pal/cpuid/leaf_09_edx.h"

#include "pal/cpuid/leaf_0a_eax.h"
#include "pal/cpuid/leaf_0a_ebx.h"
#include "pal/cpuid/leaf_0a_ecx.h"
#include "pal/cpuid/leaf_0a_edx.h"

#include "pal/cpuid/leaf_0b_eax.h"
#include "pal/cpuid/leaf_0b_ebx.h"
#include "pal/cpuid/leaf_0b_ecx.h"
#include "pal/cpuid/leaf_0b_edx.h"

#include "pal/cpuid/leaf_0d_eax.h"
#include "pal/cpuid/leaf_0d_ebx.h"
#include "pal/cpuid/leaf_0d_ecx.h"
#include "pal/cpuid/leaf_0d_edx.h"

#include "pal/cpuid/leaf_0f_eax.h"
#include "pal/cpuid/leaf_0f_ebx.h"
#include "pal/cpuid/leaf_0f_ecx.h"
#include "pal/cpuid/leaf_0f_edx.h"

#include "pal/cpuid/leaf_10_eax.h"
#include "pal/cpuid/leaf_10_ebx.h"
#include "pal/cpuid/leaf_10_ecx.h"
#include "pal/cpuid/leaf_10_edx.h"

#include "pal/cpuid/leaf_12_eax.h"
#include "pal/cpuid/leaf_12_ebx.h"
#include "pal/cpuid/leaf_12_ecx.h"
#include "pal/cpuid/leaf_12_edx.h"

#include "pal/cpuid/leaf_14_eax.h"
#include "pal/cpuid/leaf_14_ebx.h"
#include "pal/cpuid/leaf_14_ecx.h"
#include "pal/cpuid/leaf_14_edx.h"

#include "pal/cpuid/leaf_15_eax.h"
#include "pal/cpuid/leaf_15_ebx.h"
#include "pal/cpuid/leaf_15_ecx.h"
#include "pal/cpuid/leaf_15_edx.h"

#include "pal/cpuid/leaf_16_eax.h"
#include "pal/cpuid/leaf_16_ebx.h"
#include "pal/cpuid/leaf_16_ecx.h"
#include "pal/cpuid/leaf_16_edx.h"

#include "pal/cpuid/leaf_17_eax.h"
#include "pal/cpuid/leaf_17_ebx.h"
#include "pal/cpuid/leaf_17_ecx.h"
#include "pal/cpuid/leaf_17_edx.h"

#include "pal/cpuid/leaf_18_eax.h"
#include "pal/cpuid/leaf_18_ebx.h"
#include "pal/cpuid/leaf_18_ecx.h"
#include "pal/cpuid/leaf_18_edx.h"

#include "pal/cpuid/leaf_1a_eax.h"
#include "pal/cpuid/leaf_1a_ebx.h"
#include "pal/cpuid/leaf_1a_ecx.h"
#include "pal/cpuid/leaf_1a_edx.h"

#include "pal/cpuid/leaf_1f_eax.h"
#include "pal/cpuid/leaf_1f_ebx.h"
#include "pal/cpuid/leaf_1f_ecx.h"
#include "pal/cpuid/leaf_1f_edx.h"

#include "pal/cpuid/leaf_80000000_eax.h"
#include "pal/cpuid/leaf_80000000_ebx.h"
#include "pal/cpuid/leaf_80000000_ecx.h"
#include "pal/cpuid/leaf_80000000_edx.h"

#include "pal/cpuid/leaf_80000001_eax.h"
#include "pal/cpuid/leaf_80000001_ebx.h"
#include "pal/cpuid/leaf_80000001_ecx.h"
#include "pal/cpuid/leaf_80000001_edx.h"

#include "pal/cpuid/leaf_80000002_eax.h"
#include "pal/cpuid/leaf_80000002_ebx.h"
#include "pal/cpuid/leaf_80000002_ecx.h"
#include "pal/cpuid/leaf_80000002_edx.h"

#include "pal/cpuid/leaf_80000003_eax.h"
#include "pal/cpuid/leaf_80000003_ebx.h"
#include "pal/cpuid/leaf_80000003_ecx.h"
#include "pal/cpuid/leaf_80000003_edx.h"

#include "pal/cpuid/leaf_80000004_eax.h"
#include "pal/cpuid/leaf_80000004_ebx.h"
#include "pal/cpuid/leaf_80000004_ecx.h"
#include "pal/cpuid/leaf_80000004_edx.h"

#include "pal/cpuid/leaf_80000006_eax.h"
#include "pal/cpuid/leaf_80000006_ebx.h"
#include "pal/cpuid/leaf_80000006_ecx.h"
#include "pal/cpuid/leaf_80000006_edx.h"

#include "pal/cpuid/leaf_80000007_eax.h"
#include "pal/cpuid/leaf_80000007_ebx.h"
#include "pal/cpuid/leaf_80000007_ecx.h"
#include "pal/cpuid/leaf_80000007_edx.h"

#include "pal/cpuid/leaf_80000008_eax.h"
#include "pal/cpuid/leaf_80000008_ebx.h"
#include "pal/cpuid/leaf_80000008_ecx.h"
#include "pal/cpuid/leaf_80000008_edx.h"


