#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultNumWidgetController_EAnimState_TypeDefinitionIndex = 57409;

	enum class UIZenkovResultNumWidgetController_EAnimState : ::System::Int32
	{
		Idle = 0,
		End = 3,
		PrepareLoop = 1,
		PrepareEnd = 2,
	};
}
