#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int TriggerEffectWeaponParam_TypeDefinitionIndex = 37743;

	struct alignas(4) TriggerEffectWeaponParam
	{
		::System::Byte startPosition; // 0x10
		::System::Byte endPosition; // 0x11
		::System::Byte strength; // 0x12
	};
}
