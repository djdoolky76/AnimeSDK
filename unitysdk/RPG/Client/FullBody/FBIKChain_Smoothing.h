#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FullBody
{
	enum class FBIKChain_Smoothing : ::System::Int32
	{
		None = 0,
		Exponential = 1,
		Cubic = 2,
	};
}
