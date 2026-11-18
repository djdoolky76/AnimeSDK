#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int EMontageEndBehavior_TypeDefinitionIndex = 87784;

	enum class EMontageEndBehavior : ::System::Int32
	{
		Loop = 1,
		HoldLastSequenceClip = 2,
		StopAtEnd = 0,
	};
}
