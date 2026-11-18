#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OGOALFIEBAB_TypeDefinitionIndex = 76388;

enum class OGOALFIEBAB : ::System::Byte
{
	LoopingClip = 8,
	Invalid = 0,
	TargetInactive = 5,
	MissingClip = 2,
	TimedOut = 7,
	Interrupted = 6,
	PlayRejected = 3,
	MissingTarget = 1,
	TargetRecycled = 4,
};
