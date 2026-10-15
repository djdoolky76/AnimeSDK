#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ComplexSkillAIWeaknessCompare : ::System::Int32
	{
		ActorCounterTarget = 0,
		TargetCounterActor = 1,
	};
}
