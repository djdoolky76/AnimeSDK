#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController_ProgressAnimType_TypeDefinitionIndex = 50225;

	enum class UIMainCityClockWidgetController_ProgressAnimType : ::System::Int32
	{
		CrossDay = 2,
		CrossDayFadeOut = 4,
		None = 0,
		CrossDayReverse = 3,
		Advance = 1,
	};
}
