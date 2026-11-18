#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFlags_TypeDefinitionIndex = 54037;

	enum class EViewObjectComponentFlags : ::System::Int32
	{
		Enabled = 4,
		CustomDestroy = 16,
		Detaching = 32,
	};
}
