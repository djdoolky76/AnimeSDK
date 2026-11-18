#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballMainPageController_GoBtnDisplayState_TypeDefinitionIndex = 59541;

	enum class UIPinballMainPageController_GoBtnDisplayState : ::System::Int32
	{
		InProgress = 0,
		WaitingNextChain = 1,
		AllFinished = 2,
	};
}
