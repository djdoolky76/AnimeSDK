#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianDevelopRightWidgetController_DevelopRightState_TypeDefinitionIndex = 54649;

	enum class UISuibianDevelopRightWidgetController_DevelopRightState : ::System::Int32
	{
		None = -1,
		UpgradePreUnResearch = 3,
		ResearchEnough = 2,
		AlreadyResearchLevelUp = 7,
		AlreadyResearch = 6,
		UpgradeEnough = 5,
		ResearchNotEnough = 1,
		GoDispatch = 0,
		UpgradeNotEnough = 4,
	};
}
