#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int DebugInfoType_TypeDefinitionIndex = 8253;

	enum class DebugInfoType : ::System::Int32
	{
		SeperateTags = 2,
		SeperateCoroutines = 1,
		None = 0,
	};
}
