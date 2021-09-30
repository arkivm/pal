#include <iostream>

#include "cpuid.h"

// PAL can also pretty-print things for you through any printf-like function:
#include <stdio.h>


#define CONCAT(prefix, id, reg)  prefix ## id ## reg

#define PRINT_CPUID_LEAF(X) ({     \
      CONCAT(leaf_, X, _eax)::print(printf); \
      CONCAT(leaf_, X, _ebx)::print(printf); \
      CONCAT(leaf_, X, _ecx)::print(printf); \
      CONCAT(leaf_, X, _edx)::print(printf); \
      })

#define PRINT_CPUID_LEAF_INDEXED(X) ({     \
      CONCAT(leaf_, X, _eax)::print(printf, 0); \
      CONCAT(leaf_, X, _ebx)::print(printf, 1); \
      CONCAT(leaf_, X, _ecx)::print(printf, 2); \
      CONCAT(leaf_, X, _edx)::print(printf, 3); \
      })


int main()
{
    // For C++11 everything in PAL is contained in the "pal" namespace
    using namespace pal;

    PRINT_CPUID_LEAF(01);
    PRINT_CPUID_LEAF(02);
    PRINT_CPUID_LEAF(03);
    PRINT_CPUID_LEAF_INDEXED(04);

    PRINT_CPUID_LEAF(05);
    PRINT_CPUID_LEAF(06);
    PRINT_CPUID_LEAF_INDEXED(07);

    PRINT_CPUID_LEAF(09);
    PRINT_CPUID_LEAF(0a);
    PRINT_CPUID_LEAF(0b);

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

    PRINT_CPUID_LEAF(15);
    PRINT_CPUID_LEAF(16);

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

    PRINT_CPUID_LEAF(1a);
    PRINT_CPUID_LEAF(1f);
    PRINT_CPUID_LEAF(80000000);
    PRINT_CPUID_LEAF(80000001);
    PRINT_CPUID_LEAF(80000002);
    PRINT_CPUID_LEAF(80000003);
    PRINT_CPUID_LEAF(80000004);
    PRINT_CPUID_LEAF(80000006);
    PRINT_CPUID_LEAF(80000007);
    PRINT_CPUID_LEAF(80000008);
}
