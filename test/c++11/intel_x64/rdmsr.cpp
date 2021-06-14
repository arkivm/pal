#include <pal/instruction/rdmsr.h>
#include <pal/msr/ia32_feature_control.h>

void test_rdmsr_compile(void)
{
    uint32_t address = pal::msr::ia32_feature_control::address;
    uint64_t value = pal::execute_rdmsr(address);
    pal::ia32_feature_control::print(value);
}
