#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityMainPageController_EState_TypeDefinitionIndex = 52101;

	enum class UIFoodQteActivityMainPageController_EState : ::System::Int32
	{
		None = 0,
		InGame = 2,
		Settle = 3,
		SelectLevel = 1,
	};
}
