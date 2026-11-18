#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetBoolean_BoolSetModes_TypeDefinitionIndex = 29529;

	enum class SetBoolean_BoolSetModes : ::System::Int32
	{
		False = 0,
		True = 1,
		Toggle = 2,
	};
}
