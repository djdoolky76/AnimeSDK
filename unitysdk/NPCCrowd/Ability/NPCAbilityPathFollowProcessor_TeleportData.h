#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessor_TeleportData_TypeDefinitionIndex = 84142;

	struct alignas(4) NPCAbilityPathFollowProcessor_TeleportData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Int32 pathID; // 0x1C
		::System::UInt16 nearestControlPointIdx; // 0x20
		::System::UInt16 nearest2ndControlPointIdx; // 0x22
		::System::Int32 laneIdx; // 0x24
		::System::Single distanceToNearestPoint; // 0x28
		::System::Single distanceToNearest2ndPoint; // 0x2C
	};
}
