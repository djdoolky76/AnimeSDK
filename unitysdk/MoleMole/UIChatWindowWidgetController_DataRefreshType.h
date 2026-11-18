#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_DataRefreshType_TypeDefinitionIndex = 73439;

	enum class UIChatWindowWidgetController_DataRefreshType : ::System::Int32
	{
		Nothing = 4,
		History = 1,
		None = 0,
		New = 2,
		All = 7,
	};
}
