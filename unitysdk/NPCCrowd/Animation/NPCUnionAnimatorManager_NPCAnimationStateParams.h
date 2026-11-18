#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimatorManager_NPCAnimationStateParams_TypeDefinitionIndex = 78110;

	enum class NPCUnionAnimatorManager_NPCAnimationStateParams : ::System::Int32
	{
		UpperBodyState = 3,
		ReactionState = 2,
		None = 0,
		AttractorState = 1,
	};
}
