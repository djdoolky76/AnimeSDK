#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFeatureEvent_TypeDefinitionIndex = 70123;

	enum class EViewObjectComponentFeatureEvent : ::System::Int32
	{
		OnEntityReset = 5,
		OnExitBackStage = 8,
		None = 0,
		OnEntityReady = 3,
		OnEnterBackStage = 7,
		OnPostReady = 1,
		OnAfterPostReady = 6,
		OnEntityAndGraphReady = 4,
		OnEntityPreReady = 2,
	};
}
