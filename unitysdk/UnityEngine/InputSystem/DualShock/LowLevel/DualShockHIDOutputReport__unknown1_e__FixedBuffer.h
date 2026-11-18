#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem::DualShock::LowLevel
{
	inline static constexpr unsigned int DualShockHIDOutputReport__unknown1_e__FixedBuffer_TypeDefinitionIndex = 31908;

	struct alignas(4) DualShockHIDOutputReport__unknown1_e__FixedBuffer
	{
		::System::Byte FixedElementField; // 0x10
	};
}
