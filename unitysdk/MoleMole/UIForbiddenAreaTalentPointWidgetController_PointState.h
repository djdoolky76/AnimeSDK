#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPointWidgetController_PointState_TypeDefinitionIndex = 60003;

	enum class UIForbiddenAreaTalentPointWidgetController_PointState : ::System::Int32
	{
		PointState_None = 0,
		PointState_Normal = 3,
		PointState_Unlock = 2,
		PointState_Advanced = 4,
		PointState_Lock = 1,
	};
}
