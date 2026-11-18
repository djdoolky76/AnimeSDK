#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadVibrationParam_TypeDefinitionIndex = 38677;

struct alignas(4) Audio_PINVOKE_ScePadVibrationParam
{
	::System::Byte largeMotor; // 0x10
	::System::Byte smallMotor; // 0x11
};
