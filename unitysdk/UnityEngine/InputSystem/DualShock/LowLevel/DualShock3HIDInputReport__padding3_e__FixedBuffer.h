#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShock3HIDInputReport__padding3_e__FixedBuffer_TypeDefinitionIndex = 31905;

	struct alignas(4) DualShock3HIDInputReport__padding3_e__FixedBuffer
	{
		::System::Byte FixedElementField; // 0x10
	};
}
