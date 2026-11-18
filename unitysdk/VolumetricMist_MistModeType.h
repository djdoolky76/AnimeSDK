#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int VolumetricMist_MistModeType_TypeDefinitionIndex = 26948;

enum class VolumetricMist_MistModeType : ::System::Int32
{
	AroundSurface = 2,
	Simple = 0,
	WithNoise = 1,
};
