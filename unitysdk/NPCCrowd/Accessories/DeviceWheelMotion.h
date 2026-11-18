#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int DeviceWheelMotion_TypeDefinitionIndex = 39579;

	struct alignas(4) DeviceWheelMotion
	{
		::UnityEngine::Quaternion OwnerRotation; // 0x10
		::System::Single Speed; // 0x20
		::System::Byte Valid; // 0x24
	};
}
