#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int APNCODNOFLH_IOLGAFLHBCM_TypeDefinitionIndex = 80728;

enum class APNCODNOFLH_IOLGAFLHBCM : ::System::Int32
{
	IgnoreLocal = 2,
	IgnoreWitch = 1,
	FullyIncluded = 0,
	OnlyWorld = 3,
	IgnoreWorld = 4,
	None = 7,
	OnlyLocal = 5,
	IgnoreWitchExclude = 8,
};
