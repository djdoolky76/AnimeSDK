#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GGOJBLHLGMG_TypeDefinitionIndex = 60588;

enum class GGOJBLHLGMG : ::System::Int32
{
	InDecorTimer = 5,
	OnlyDungeonTimer = 4,
	TimerFinished = 6,
	WaitForStartCDValid = 1,
	WaitingForStart = 0,
	WaitingForManualStart = 3,
	InStartCD = 2,
};
