#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class InfiniteWaveDataType : ::System::Int32
	{
		SummonedProgress = 0,
		SummonedProgressIncludeParamEntity = 1,
		DeadOrEscapeProgress = 2,
		DeadOrEscapeProgressIncludeParamEntity = 3,
	};
}
