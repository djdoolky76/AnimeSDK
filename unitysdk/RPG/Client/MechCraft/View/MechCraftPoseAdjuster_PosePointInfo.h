#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftPoseAdjuster_PosePointInfo_TypeDefinitionIndex = 79972;

	struct alignas(8) MechCraftPoseAdjuster_PosePointInfo
	{
		::System::UInt32 PoseID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* Point; // 0x18
	};
}
