#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedEffector_TypeDefinitionIndex = 36967;

	enum class FullBodyBipedEffector : ::System::Int32
	{
		LeftHand = 5,
		RightHand = 6,
		LeftThigh = 3,
		LeftShoulder = 1,
		LeftFoot = 7,
		RightThigh = 4,
		RightFoot = 8,
		RightShoulder = 2,
		Body = 0,
	};
}
