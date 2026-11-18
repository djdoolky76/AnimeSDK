#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FootLockStatus_TypeDefinitionIndex = 65041;

	enum class FootLockStatus : ::System::Int32
	{
		RightToLeft = 5,
		RightFoot = 2,
		None = 0,
		Both = 3,
		LeftFoot = 1,
		LeftToRight = 4,
	};
}
