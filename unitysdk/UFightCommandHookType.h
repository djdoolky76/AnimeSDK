#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightCommandHookType_TypeDefinitionIndex = 29034;

enum class UFightCommandHookType : ::System::Int32
{
	Finish = 1,
	Continue = 2,
	Error = 3,
	None = 0,
};
