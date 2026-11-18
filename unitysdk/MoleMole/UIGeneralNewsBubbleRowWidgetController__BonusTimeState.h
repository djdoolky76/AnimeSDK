#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__BonusTimeState_TypeDefinitionIndex = 80551;

	enum class UIGeneralNewsBubbleRowWidgetController__BonusTimeState : ::System::Int32
	{
		BlinkWait = 5,
		Blinking = 4,
		Ready = 0,
		IsDoFadeOut = 2,
		IsShowing = 1,
		BlinkRestart = 3,
	};
}
