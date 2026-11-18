#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_ECloseReason_TypeDefinitionIndex = 64781;

	enum class UISummerFishPlayPageController_ECloseReason : ::System::Int32
	{
		Timeout = 2,
		FinishFish = 1,
		AutoFishEnd = 4,
		AutoFishBack = 3,
		ManualClose = 0,
	};
}
