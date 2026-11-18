#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_VerboseMode_TypeDefinitionIndex = 29200;

	enum class DebugLogText_VerboseMode : ::System::Int32
	{
		LogAndDisplayLabel = 0,
		LogOnly = 1,
		DisplayLabelOnly = 2,
	};
}
