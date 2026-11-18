#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int DeviceWheelState_TypeDefinitionIndex = 55045;

	struct alignas(4) DeviceWheelState
	{
		::UnityEngine::Quaternion LocalRotation; // 0x10
		::System::Single LastUpdateTime; // 0x20
		::System::Byte Initialized; // 0x24
	};
}
