#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper_WorkingStatus_TypeDefinitionIndex = 41720;

	enum class GroupVariableHelper_WorkingStatus : ::System::Int32
	{
		Reading = 1,
		Writing = 2,
		None = 0,
	};
}
