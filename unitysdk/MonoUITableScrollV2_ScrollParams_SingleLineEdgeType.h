#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollParams_SingleLineEdgeType_TypeDefinitionIndex = 40119;

enum class MonoUITableScrollV2_ScrollParams_SingleLineEdgeType : ::System::Int32
{
	SwitchToNextLine = 2,
	LoopInCurrentLine = 1,
	Clamp = 0,
};
