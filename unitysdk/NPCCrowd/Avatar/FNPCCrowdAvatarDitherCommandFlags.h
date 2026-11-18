#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int FNPCCrowdAvatarDitherCommandFlags_TypeDefinitionIndex = 61019;

	enum class FNPCCrowdAvatarDitherCommandFlags : ::System::Int32
	{
		None = 0,
		StartFadeOut = 1,
		CollisionDitherChanged = 2,
	};
}
