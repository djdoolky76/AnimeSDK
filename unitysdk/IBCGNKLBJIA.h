#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int IBCGNKLBJIA_TypeDefinitionIndex = 72354;

enum class IBCGNKLBJIA : ::System::Byte
{
	CmdApplied = 0,
	Popped = 2,
	HardSwitch = 6,
	TopChanged = 7,
	TransitionStart = 4,
	LayerReleased = 8,
	ReplacedTop = 3,
	TransitionEnd = 5,
	Pushed = 1,
};
