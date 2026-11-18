#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int AccessoryFollowSource_TypeDefinitionIndex = 88453;

	enum class AccessoryFollowSource : ::System::Byte
	{
		CpuPose = 1,
		StaticPose = 2,
		GpuShader = 3,
		Disabled = 0,
	};
}
