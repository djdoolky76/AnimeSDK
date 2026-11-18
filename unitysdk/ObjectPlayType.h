#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ObjectPlayType_TypeDefinitionIndex = 64590;

enum class ObjectPlayType : ::System::Int32
{
	Video = 2,
	Light = 4,
	Effect = 3,
	None = 0,
	FrameTexture = 1,
};
