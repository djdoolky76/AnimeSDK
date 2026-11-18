#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ParallelTimelineTimeScaleType_TypeDefinitionIndex = 42226;

	enum class ParallelTimelineTimeScaleType : ::System::Int32
	{
		WorldTimeScaleIgnoreWitch = 1,
		IgnoreWorldTimeScale = 2,
		WorldTimeScale = 0,
	};
}
