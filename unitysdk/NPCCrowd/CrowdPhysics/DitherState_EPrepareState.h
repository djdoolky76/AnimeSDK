#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EPrepareState_TypeDefinitionIndex = 82193;

	enum class DitherState_EPrepareState : ::System::Int32
	{
		None = 0,
		PrepareFadeOut = 2,
		PrepareFadeIn = 1,
	};
}
