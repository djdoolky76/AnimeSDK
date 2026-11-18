#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus_TypeDefinitionIndex = 80548;

	enum class UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus : ::System::Int32
	{
		FadeIn = 2,
		FadeOutFinish = 4,
		WaitForFadeIn = 0,
		WaitForMove = 3,
		FadeInWaitMoving = 5,
		FadeOut = 9,
		Normal = 1,
		MovingWaitForFadeOut = 8,
		MovingWaitForFadein = 7,
		Moving = 6,
	};
}
