#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int PoolClosedReason_TypeDefinitionIndex = 77249;

	enum class PoolClosedReason : ::System::Int32
	{
		None = 0,
		FeatureSwitchClosed = 1,
		NotInSchedule = 2,
	};
}
