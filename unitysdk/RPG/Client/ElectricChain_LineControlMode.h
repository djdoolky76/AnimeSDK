#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ElectricChain_LineControlMode : ::System::Int32
	{
		Constant = 0,
		AnimationCurve = 1,
		GaussianDistribution = 2,
	};
}
