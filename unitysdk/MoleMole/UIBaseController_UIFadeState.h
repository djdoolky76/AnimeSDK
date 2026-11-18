#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UIFadeState_TypeDefinitionIndex = 55822;

	enum class UIBaseController_UIFadeState : ::System::Int32
	{
		FadingIn = 1,
		FadingOut = 2,
		Other = 3,
		None = 0,
	};
}
