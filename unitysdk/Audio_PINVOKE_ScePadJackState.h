#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Audio_PINVOKE_ScePadHeadsetType.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadJackState_TypeDefinitionIndex = 38685;

struct alignas(8) Audio_PINVOKE_ScePadJackState
{
	::Audio_PINVOKE_ScePadHeadsetType headsetState; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Byte>* reserve; // 0x18
};
