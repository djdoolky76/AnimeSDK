#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMontagePriorityLayer_TypeDefinitionIndex = 78255;

	enum class EMontagePriorityLayer : ::System::Int32
	{
		BaseAnim = 0,
		BlendShape = 2,
		Count = 4,
		BangbooFrameKey = 1,
		Eyes = 3,
	};
}
