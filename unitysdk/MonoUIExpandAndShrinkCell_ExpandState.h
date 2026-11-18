#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUIExpandAndShrinkCell_ExpandState_TypeDefinitionIndex = 71868;

enum class MonoUIExpandAndShrinkCell_ExpandState : ::System::Int32
{
	Shrink = 4,
	Expand = 2,
	ExpandStart = 1,
	ShrinkStart = 3,
	None = 0,
};
