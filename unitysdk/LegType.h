#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegType_TypeDefinitionIndex = 66719;

enum class LegType : ::System::Int32
{
	Quadruped = 2,
	BipedAntiJoint = 1,
	Humanoid = 0,
};
