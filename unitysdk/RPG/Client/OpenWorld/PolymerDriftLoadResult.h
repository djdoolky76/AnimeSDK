#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int PolymerDriftLoadResult_TypeDefinitionIndex = 75907;

	enum class PolymerDriftLoadResult : ::System::Int32
	{
		NotApplicable = 0,
		Registered = 1,
		Rejected = 2,
	};
}
