#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedChain_TypeDefinitionIndex = 36884;

	enum class FullBodyBipedChain : ::System::Int32
	{
		LeftArm = 0,
		LeftLeg = 2,
		RightArm = 1,
		RightLeg = 3,
	};
}
