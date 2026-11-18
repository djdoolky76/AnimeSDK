#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController_ClickMode_TypeDefinitionIndex = 71120;

	enum class UIMissionTipsRowWidgetController_ClickMode : ::System::Int32
	{
		None = 0,
		OpenMap = 4,
		knot = 3,
		ChangeTrack = 1,
		Interact = 2,
	};
}
