#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Audio_PINVOKE_ScePadSupportBusType.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadInit3Param_TypeDefinitionIndex = 38679;

struct alignas(8) Audio_PINVOKE_ScePadInit3Param
{
	::System::IntPtr allocFunc; // 0x10
	::System::IntPtr freeFunc; // 0x18
	::Audio_PINVOKE_ScePadSupportBusType supportBusType; // 0x20
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Byte>* reserve; // 0x28
};
