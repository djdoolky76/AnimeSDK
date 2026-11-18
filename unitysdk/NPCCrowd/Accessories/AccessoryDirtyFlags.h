#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int AccessoryDirtyFlags_TypeDefinitionIndex = 60737;

	enum class AccessoryDirtyFlags : ::System::Byte
	{
		DeviceWheelBinding = 64,
		FollowTopology = 8,
		Visibility = 1,
		FollowSource = 16,
		All = 127,
		RendererBinding = 2,
		GpuMaterial = 4,
		FollowEnable = 32,
		None = 0,
	};
}
