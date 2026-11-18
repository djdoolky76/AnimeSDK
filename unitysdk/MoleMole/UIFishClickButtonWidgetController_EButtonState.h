#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 61173;

	enum class UIFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		ContinueClick = 4,
		LongPress = 5,
		WaitFish = 1,
		None = 0,
		QTE = 2,
		WaitBattle = 3,
	};
}
