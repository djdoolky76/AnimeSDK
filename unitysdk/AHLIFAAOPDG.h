#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AHLIFAAOPDG_TypeDefinitionIndex = 34800;

enum class AHLIFAAOPDG : ::System::Int32
{
	SkipSameValueCheckAfterDirtyButBeforeChange = 32,
	SendOnBeforePropertyChange = 4,
	SendOldValue = 8,
	None = 0,
	SendEventOncePerFrame = 16,
	IgnoreSameValue = 2,
};
