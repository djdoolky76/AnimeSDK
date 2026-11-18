#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int DeviceWheelMotionBinding_TypeDefinitionIndex = 70550;

	struct alignas(4) DeviceWheelMotionBinding
	{
		::System::Int32 WheelIndex; // 0x10
		::System::Int32 AbilityIndex; // 0x14
	};
}
