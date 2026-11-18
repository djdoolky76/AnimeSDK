#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectActive_SetActiveMode_TypeDefinitionIndex = 29978;

	enum class SetObjectActive_SetActiveMode : ::System::Int32
	{
		Deactivate = 0,
		Activate = 1,
		Toggle = 2,
	};
}
