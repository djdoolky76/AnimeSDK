#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DDPFDGLCPKB_TypeDefinitionIndex = 39086;

enum class DDPFDGLCPKB : ::System::Int32
{
	Finish = 1,
	ByManuallySet = 8,
	None = 0,
	Cancel = 2,
	ByConditions = 16,
	ByServerNotify = 4,
};
