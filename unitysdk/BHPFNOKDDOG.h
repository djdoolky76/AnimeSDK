#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int BHPFNOKDDOG_TypeDefinitionIndex = 39860;

enum class BHPFNOKDDOG : ::System::Int32
{
	WorldTimeIgnoreWitch = 1,
	WorldTimeUnscaled = 3,
	EntityTimeIgnoreWorldAndWitch = 7,
	EntityTime = 4,
	WorldTime = 0,
	WitchIgnoreWorld = 2,
	MaxCount = 8,
	Invalid = 8,
	EntityTimeIgnoreWorld = 5,
	EntityTimeIgnoreWitch = 6,
};
