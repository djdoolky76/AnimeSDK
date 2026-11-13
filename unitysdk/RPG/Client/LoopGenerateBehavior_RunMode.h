#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateBehavior_RunMode_TypeDefinitionIndex = 72890;

	enum class LoopGenerateBehavior_RunMode : ::System::Int32
	{
		Loop = 0,
		StartEnd = 1,
	};
}
