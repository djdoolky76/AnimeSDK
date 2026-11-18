#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_AutoSpaceAllocateType_TypeDefinitionIndex = 40071;

enum class MonoUITableScrollV2_AutoSpaceAllocateType : ::System::Int32
{
	CenterOnlyKeepOriginSpace = 5,
	KeepOriginSpace = 1,
	SpaceAndPadding = 0,
	KeepOriginPadding = 2,
	CenterWithViewRectAdjust = 4,
	Center = 3,
};
