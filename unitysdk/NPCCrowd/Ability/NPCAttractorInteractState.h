#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAttractorInteractState_TypeDefinitionIndex = 50229;

	enum class NPCAttractorInteractState : ::System::Int32
	{
		Exiting = 4,
		Using = 3,
		None = 0,
		Claim = 2,
		Query = 1,
	};
}
