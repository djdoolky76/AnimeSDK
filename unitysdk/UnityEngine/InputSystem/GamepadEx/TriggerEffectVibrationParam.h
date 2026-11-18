#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectVibrationParam_TypeDefinitionIndex = 37742;

	struct alignas(4) TriggerEffectVibrationParam
	{
		::System::Byte position; // 0x10
		::System::Byte amplitude; // 0x11
		::System::Byte frequency; // 0x12
	};
}
