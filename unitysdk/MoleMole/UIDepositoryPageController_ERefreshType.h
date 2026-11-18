#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController_ERefreshType_TypeDefinitionIndex = 63589;

	enum class UIDepositoryPageController_ERefreshType : ::System::Int32
	{
		SortOnly = 1,
		AnimationOnly = 0,
		Full = 2,
	};
}
