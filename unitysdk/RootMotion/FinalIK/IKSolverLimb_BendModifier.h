#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_BendModifier_TypeDefinitionIndex = 36897;

	enum class IKSolverLimb_BendModifier : ::System::Int32
	{
		Arm = 3,
		Target = 1,
		Parent = 2,
		Goal = 4,
		Animation = 0,
	};
}
