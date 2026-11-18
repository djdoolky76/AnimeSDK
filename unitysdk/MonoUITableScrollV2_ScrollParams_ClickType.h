#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollParams_ClickType_TypeDefinitionIndex = 40122;

enum class MonoUITableScrollV2_ScrollParams_ClickType : ::System::Int32
{
	OnlyUpdateSelect = 1,
	OnlyTriggerOnClick = 0,
	UpdateSelectAndTriggerOnClick = 2,
};
