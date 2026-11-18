#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FunctionMaskLevel_TypeDefinitionIndex = 63294;

enum class FunctionMaskLevel : ::System::Int32
{
	Disable = 3,
	Lock = 1,
	None = 0,
	Invisible = 4,
	Malfunction = 2,
};
