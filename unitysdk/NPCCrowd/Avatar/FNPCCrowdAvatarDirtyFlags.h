#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarDirtyFlags_TypeDefinitionIndex = 64103;

	enum class FNPCCrowdAvatarDirtyFlags : ::System::Int32
	{
		Input = 2,
		None = 0,
		Config = 1,
	};
}
