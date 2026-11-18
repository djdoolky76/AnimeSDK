#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_LogMode_TypeDefinitionIndex = 29201;

	enum class DebugLogText_LogMode : ::System::Int32
	{
		Error = 2,
		Warning = 1,
		Log = 0,
	};
}
