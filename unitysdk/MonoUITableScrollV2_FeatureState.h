#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_FeatureState_TypeDefinitionIndex = 40092;

enum class MonoUITableScrollV2_FeatureState : ::System::Int32
{
	DragScrollBar = 3,
	End = 11,
	SelectAlign = 10,
	GridAlign = 8,
	DragEnd = 2,
	Drag = 1,
	Rolling = 7,
	Damp = 9,
	MouseScrollEnd = 6,
	DragScrollBarEnd = 4,
	None = 0,
	MouseScroll = 5,
};
