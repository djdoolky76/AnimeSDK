#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadContainerIdInfo_TypeDefinitionIndex = 38675;

struct alignas(8) Audio_PINVOKE_ScePadContainerIdInfo
{
	::System::UInt32 size; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Char>* containerInfo; // 0x18
};
