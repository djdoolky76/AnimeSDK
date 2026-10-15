#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	enum class MechCraftConstraintConditionPredicateType : ::System::Int32
	{
		IsTrue = 0,
		EqualToTarget = 1,
		LessThanOrEqualToTarget = 2,
		GreaterThanOrEqualToTarget = 3,
	};
}
