#include <iostream>

#include "cpuid.h"

// PAL can also pretty-print things for you through any printf-like function:
#include <stdio.h>

int main()
{
    // For C++11 everything in PAL is contained in the "pal" namespace
    using namespace pal;

    leaf_01_eax::print(printf);
    leaf_01_ebx::print(printf);
    leaf_01_ecx::print(printf);
    leaf_01_edx::print(printf);

    leaf_02_eax::print(printf);
    leaf_02_ebx::print(printf);
    leaf_02_ecx::print(printf);
    leaf_02_edx::print(printf);

    leaf_03_eax::print(printf);
    leaf_03_ebx::print(printf);
    leaf_03_ecx::print(printf);
    leaf_03_edx::print(printf);

    leaf_04_eax::print(printf, 0);
    leaf_04_ebx::print(printf, 1);
    leaf_04_ecx::print(printf, 2);
    leaf_04_edx::print(printf, 3);

    leaf_05_eax::print(printf);
    leaf_05_ebx::print(printf);
    leaf_05_ecx::print(printf);
    leaf_05_edx::print(printf);

    leaf_06_eax::print(printf);
    leaf_06_ebx::print(printf);
    leaf_06_ecx::print(printf);
    leaf_06_edx::print(printf);

    leaf_07_eax::print(printf, 0);
    leaf_07_ebx::print(printf, 1);
    leaf_07_ecx::print(printf, 2);
    leaf_07_edx::print(printf, 3);

    leaf_09_eax::print(printf);
    leaf_09_ebx::print(printf);
    leaf_09_ecx::print(printf);
    leaf_09_edx::print(printf);

    leaf_0a_eax::print(printf);
    leaf_0a_ebx::print(printf);
    leaf_0a_ecx::print(printf);
    leaf_0a_edx::print(printf);

    leaf_0b_eax::print(printf);
    leaf_0b_ebx::print(printf);
    leaf_0b_ecx::print(printf);
    leaf_0b_edx::print(printf);

    leaf_0d_eax::subleaf_0::print(printf, 0);
    leaf_0d_ebx::subleaf_0::print(printf, 1);
    leaf_0d_ecx::subleaf_0::print(printf, 2);
    leaf_0d_edx::subleaf_0::print(printf, 3);

    leaf_0d_eax::subleaf_1::print(printf, 0);
    leaf_0d_ebx::subleaf_1::print(printf, 1);
    leaf_0d_ecx::subleaf_1::print(printf, 2);
    leaf_0d_edx::subleaf_1::print(printf, 3);

    leaf_0d_eax::subleaf_n::print(printf, 0);
    leaf_0d_ebx::subleaf_n::print(printf, 1);
    leaf_0d_ecx::subleaf_n::print(printf, 2);
    leaf_0d_edx::subleaf_n::print(printf, 3);

    leaf_0f_eax::subleaf_0::print(printf, 0);
    leaf_0f_ebx::subleaf_0::print(printf, 1);
    leaf_0f_ecx::subleaf_0::print(printf, 2);
    leaf_0f_edx::subleaf_0::print(printf, 3);

    leaf_0f_eax::subleaf_1::print(printf, 0);
    leaf_0f_ebx::subleaf_1::print(printf, 1);
    leaf_0f_ecx::subleaf_1::print(printf, 2);
    leaf_0f_edx::subleaf_1::print(printf, 3);

    leaf_10_eax::subleaf_0::print(printf, 0);
    leaf_10_ebx::subleaf_0::print(printf, 1);
    leaf_10_ecx::subleaf_0::print(printf, 2);
    leaf_10_edx::subleaf_0::print(printf, 3);

    leaf_10_eax::subleaf_1::print(printf, 0);
    leaf_10_ebx::subleaf_1::print(printf, 1);
    leaf_10_ecx::subleaf_1::print(printf, 2);
    leaf_10_edx::subleaf_1::print(printf, 3);

    leaf_10_eax::subleaf_2::print(printf, 0);
    leaf_10_ebx::subleaf_2::print(printf, 1);
    leaf_10_ecx::subleaf_2::print(printf, 2);
    leaf_10_edx::subleaf_2::print(printf, 3);

    leaf_10_eax::subleaf_3::print(printf, 0);
    leaf_10_ebx::subleaf_3::print(printf, 1);
    leaf_10_ecx::subleaf_3::print(printf, 2);
    leaf_10_edx::subleaf_3::print(printf, 3);

    leaf_12_eax::subleaf_0::print(printf, 0);
    leaf_12_ebx::subleaf_0::print(printf, 1);
    leaf_12_ecx::subleaf_0::print(printf, 2);
    leaf_12_edx::subleaf_0::print(printf, 3);

    leaf_12_eax::subleaf_1::print(printf, 0);
    leaf_12_ebx::subleaf_1::print(printf, 1);
    leaf_12_ecx::subleaf_1::print(printf, 2);
    leaf_12_edx::subleaf_1::print(printf, 3);

    leaf_12_eax::subleaf_2::print(printf, 0);
    leaf_12_ebx::subleaf_2::print(printf, 1);
    leaf_12_ecx::subleaf_2::print(printf, 2);
    leaf_12_edx::subleaf_2::print(printf, 3);

    leaf_14_eax::subleaf_0::print(printf, 0);
    leaf_14_ebx::subleaf_0::print(printf, 1);
    leaf_14_ecx::subleaf_0::print(printf, 2);
    leaf_14_edx::subleaf_0::print(printf, 3);

    leaf_14_eax::subleaf_1::print(printf, 0);
    leaf_14_ebx::subleaf_1::print(printf, 1);
    leaf_14_ecx::subleaf_1::print(printf, 2);
    leaf_14_edx::subleaf_1::print(printf, 3);

    leaf_15_eax::print(printf);
    leaf_15_ebx::print(printf);
    leaf_15_ecx::print(printf);
    leaf_15_edx::print(printf);

    leaf_16_eax::print(printf);
    leaf_16_ebx::print(printf);
    leaf_16_ecx::print(printf);
    leaf_16_edx::print(printf);

    leaf_17_eax::subleaf_0::print(printf, 0);
    leaf_17_ebx::subleaf_0::print(printf, 1);
    leaf_17_ecx::subleaf_0::print(printf, 2);
    leaf_17_edx::subleaf_0::print(printf, 3);

    leaf_17_eax::subleaf_1_3::print(printf, 0);
    leaf_17_ebx::subleaf_1_3::print(printf, 1);
    leaf_17_ecx::subleaf_1_3::print(printf, 2);
    leaf_17_edx::subleaf_1_3::print(printf, 3);

    leaf_17_eax::subleaf_n::print(printf, 0);
    leaf_17_ebx::subleaf_n::print(printf, 1);
    leaf_17_ecx::subleaf_n::print(printf, 2);
    leaf_17_edx::subleaf_n::print(printf, 3);

    leaf_18_eax::subleaf_0::print(printf, 0);
    leaf_18_ebx::subleaf_0::print(printf, 1);
    leaf_18_ecx::subleaf_0::print(printf, 2);
    leaf_18_edx::subleaf_0::print(printf, 3);

    leaf_18_eax::subleaf_n::print(printf, 0);
    leaf_18_ebx::subleaf_n::print(printf, 1);
    leaf_18_ecx::subleaf_n::print(printf, 2);
    leaf_18_edx::subleaf_n::print(printf, 3);

    leaf_1a_eax::print(printf);
    leaf_1a_ebx::print(printf);
    leaf_1a_ecx::print(printf);
    leaf_1a_edx::print(printf);

    leaf_1f_eax::print(printf);
    leaf_1f_ebx::print(printf);
    leaf_1f_ecx::print(printf);
    leaf_1f_edx::print(printf);

    leaf_80000000_eax::print(printf);
    leaf_80000000_ebx::print(printf);
    leaf_80000000_ecx::print(printf);
    leaf_80000000_edx::print(printf);

    leaf_80000001_eax::print(printf);
    leaf_80000001_ebx::print(printf);
    leaf_80000001_ecx::print(printf);
    leaf_80000001_edx::print(printf);

    leaf_80000002_eax::print(printf);
    leaf_80000002_ebx::print(printf);
    leaf_80000002_ecx::print(printf);
    leaf_80000002_edx::print(printf);

    leaf_80000003_eax::print(printf);
    leaf_80000003_ebx::print(printf);
    leaf_80000003_ecx::print(printf);
    leaf_80000003_edx::print(printf);

    leaf_80000004_eax::print(printf);
    leaf_80000004_ebx::print(printf);
    leaf_80000004_ecx::print(printf);
    leaf_80000004_edx::print(printf);

    leaf_80000006_eax::print(printf);
    leaf_80000006_ebx::print(printf);
    leaf_80000006_ecx::print(printf);
    leaf_80000006_edx::print(printf);

    leaf_80000007_eax::print(printf);
    leaf_80000007_ebx::print(printf);
    leaf_80000007_ecx::print(printf);
    leaf_80000007_edx::print(printf);

    leaf_80000008_eax::print(printf);
    leaf_80000008_ebx::print(printf);
    leaf_80000008_ecx::print(printf);
    leaf_80000008_edx::print(printf);
}
