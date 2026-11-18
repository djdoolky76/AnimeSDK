#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 43888;

	enum class UISummerFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		QTE = 2,
		WaitFish = 1,
		Normal = 6,
		LongPress = 5,
		None = 0,
		ContinueClick = 4,
		WaitBattle = 3,
	};
}
