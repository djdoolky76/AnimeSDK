#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int JDBOGONOEDO_TypeDefinitionIndex = 93408;

enum class JDBOGONOEDO : ::System::Int32
{
	TetherRangeExceed = 2,
	TargetLost = 5,
	TargetAcquired = 6,
	None = 0,
	LifetimeExpired = 7,
	TetherRangeReturn = 3,
	Damaged = 4,
	OwnerDeath = 1,
};
