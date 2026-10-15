#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	enum class IKSolverLimb_BendModifier : ::System::Int32
	{
		Animation = 0,
		Target = 1,
		Parent = 2,
		Arm = 3,
		Goal = 4,
	};
}
