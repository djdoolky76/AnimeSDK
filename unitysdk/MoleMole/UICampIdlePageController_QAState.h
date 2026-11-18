#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController_QAState_TypeDefinitionIndex = 38831;

	enum class UICampIdlePageController_QAState : ::System::Int32
	{
		Processing = 1,
		NoNeedToRestart = 3,
		CanRestart = 2,
		CanStart = 0,
	};
}
