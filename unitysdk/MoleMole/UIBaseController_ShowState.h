#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_ShowState_TypeDefinitionIndex = 55824;

	enum class UIBaseController_ShowState : ::System::Int32
	{
		AfterOnShow = 2,
		OnShow = 1,
		BeforeOnShow = 0,
	};
}
