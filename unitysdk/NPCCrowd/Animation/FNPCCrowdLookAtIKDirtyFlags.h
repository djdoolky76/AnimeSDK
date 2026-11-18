#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKDirtyFlags_TypeDefinitionIndex = 91083;

	enum class FNPCCrowdLookAtIKDirtyFlags : ::System::Int32
	{
		StaticConfig = 1,
		None = 0,
		Control = 2,
	};
}
