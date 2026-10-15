#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class DynamicResScalePolicyType : ::System::Int32
	{
		ReturnsPercentage = 0,
		ReturnsMinMaxLerpFactor = 1,
	};
}
