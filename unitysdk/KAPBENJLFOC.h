#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KAPBENJLFOC_TypeDefinitionIndex = 52023;

enum class KAPBENJLFOC : ::System::Byte
{
	MaxCount = 4,
	FromCameraDither = 2,
	FromFXMgrPlugin = 3,
	FromFadePlugin = 1,
	FromDitherPlugin = 0,
};
