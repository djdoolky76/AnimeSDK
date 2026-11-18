#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_WeightCurve_Type_TypeDefinitionIndex = 36802;

	enum class InteractionObject_WeightCurve_Type : ::System::Int32
	{
		PositionOffsetY = 3,
		Push = 8,
		PositionOffsetZ = 4,
		RotationWeight = 1,
		Pull = 5,
		PositionWeight = 0,
		PushParent = 9,
		BendGoalWeight = 11,
		Reach = 6,
		PositionOffsetX = 2,
		PoserWeight = 10,
		RotateBoneWeight = 7,
	};
}
