#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_EOnUIOpenSelectType_TypeDefinitionIndex = 85272;

	enum class UIRABLevelPageController_EOnUIOpenSelectType : ::System::Int32
	{
		SelectTowerFloorAndFallbackToHighestUnlockLevel = 3,
		SelectTowerFloor = 2,
		UnlockedHighestLevel = 1,
		NoSelect = 0,
	};
}
