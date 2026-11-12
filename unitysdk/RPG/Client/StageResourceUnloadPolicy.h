#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageResourceUnloadPolicy_TypeDefinitionIndex = 71467;

	enum class StageResourceUnloadPolicy : ::System::Int32
	{
		None = 0,
		Streaming = 1,
		Persistent = 2,
		All = 3,
	};
}
