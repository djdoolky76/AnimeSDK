#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int ToolboxItemFilterType_TypeDefinitionIndex = 2985;

	enum class ToolboxItemFilterType : ::System::Int32
	{
		Allow = 0,
		Custom = 1,
		Prevent = 2,
		Require = 3,
	};
}
