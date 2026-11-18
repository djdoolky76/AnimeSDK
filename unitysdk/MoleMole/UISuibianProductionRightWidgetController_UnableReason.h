#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController_UnableReason_TypeDefinitionIndex = 61880;

	enum class UISuibianProductionRightWidgetController_UnableReason : ::System::Int32
	{
		BuddyEnergyNotEnough = 2,
		NeedBuddy = 1,
		None = 0,
		UnResearch = 4,
		MaterialNotEnough = 3,
	};
}
