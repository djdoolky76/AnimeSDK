#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int TestLyraSectorLoader_DistanceFieldVisualizeMode_TypeDefinitionIndex = 27100;

enum class TestLyraSectorLoader_DistanceFieldVisualizeMode : ::System::Int32
{
	Normal = 1,
	AO = 2,
	AOWithAlbedo = 3,
	Clipmap = 4,
	None = 0,
};
