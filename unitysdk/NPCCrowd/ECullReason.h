#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int ECullReason_TypeDefinitionIndex = 60295;

	enum class ECullReason : ::System::Int32
	{
		DensityExcess = 2,
		ScoreRecovered = 3,
		ActiveCull = 0,
		Preempt = 1,
	};
}
