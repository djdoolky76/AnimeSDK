#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AKIFMIIFCHJ_TypeDefinitionIndex = 43061;

enum class AKIFMIIFCHJ : ::System::Byte
{
	OnResolvedEvent = 8,
	OnEventFromAnyone = 16,
	None = 0,
	OnPreEvent = 1,
	OnEvent = 2,
	OnPostEvent = 4,
	All = 255,
};
