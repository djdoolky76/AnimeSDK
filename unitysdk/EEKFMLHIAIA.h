#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EEKFMLHIAIA_TypeDefinitionIndex = 71367;

enum class EEKFMLHIAIA : ::System::UInt16
{
	TickStarted = 16384,
	OnStopClearFlags = 49158,
	Activated = 32768,
	ExplictStartTime = 2,
	ManualLifeCycle = 1,
	ExplictCompleteTime = 4,
	None = 0,
	PreciselyTick = 8,
	DoTickIfNoStartAction = 16,
};
