#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class RuntimeProfiler_AndroidMemoryMetricType : ::System::Int32
	{
		Rss = 0,
		Pss = 1,
		GoogleMetric = 2,
	};
}
