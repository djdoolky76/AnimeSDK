#pragma once
#include "unitysdk/unitysdk.h"
	enum class PMCOCABFEPG_AttributeState : ::System::Int32
	{
		NonTargetDefault = 0,
		NonTargetWronglyPeaked = 1,
		NonTargetAboveMaxLevel = 2,
		TargetNotReached = 3,
		TargetJustReached = 4,
		TargetMoreThanEnough = 5,
		TargetAboveMaxLevel = 6,
	};
