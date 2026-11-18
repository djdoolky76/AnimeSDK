#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_EErrorType_TypeDefinitionIndex = 81320;

	enum class UIDisplayCaseEditWidgetController_EErrorType : ::System::Int32
	{
		CannotSettle = 4,
		Overlap = 3,
		OutRange = 1,
		CannotBag = 5,
		Overflow = 2,
		None = 0,
	};
}
