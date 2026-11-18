#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_PlayState_TypeDefinitionIndex = 77614;

	enum class UIMissionTipsContainerWidgetController_PlayState : ::System::Int32
	{
		None = 0,
		HallRefreshStop = 3,
		Pausing = 2,
		Playing = 1,
	};
}
