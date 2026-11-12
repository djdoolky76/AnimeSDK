#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftConstraintConditionPredicateType_TypeDefinitionIndex = 42627;

	enum class MechCraftConstraintConditionPredicateType : ::System::Int32
	{
		IsTrue = 0,
		EqualToTarget = 1,
		LessThanOrEqualToTarget = 2,
		GreaterThanOrEqualToTarget = 3,
	};
}
