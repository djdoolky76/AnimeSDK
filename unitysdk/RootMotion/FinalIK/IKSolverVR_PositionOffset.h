#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_PositionOffset_TypeDefinitionIndex = 37016;

	enum class IKSolverVR_PositionOffset : ::System::Int32
	{
		RightHand = 4,
		Pelvis = 0,
		LeftFoot = 5,
		LeftHand = 3,
		LeftHeel = 7,
		Chest = 1,
		RightFoot = 6,
		Head = 2,
		RightHeel = 8,
	};
}
