#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SCEPADTRIGGEREFFECTVIBRATIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0F10)

inline static constexpr unsigned int ScePadTriggerEffectVibrationParam_TypeDefinitionIndex = 55028;

struct alignas(4) ScePadTriggerEffectVibrationParam
{
	::System::Byte position; // 0x10
	::System::Byte amplitude; // 0x11
	::System::Byte frequency; // 0x12

	::System::Void _ctor(::System::Byte vibrationPosition, ::System::Byte vibrationAmplitude, ::System::Byte vibrationFrequency)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SCEPADTRIGGEREFFECTVIBRATIONPARAM__CTOR_OFFSET))(this, vibrationPosition, vibrationAmplitude, vibrationFrequency);
	}
};
