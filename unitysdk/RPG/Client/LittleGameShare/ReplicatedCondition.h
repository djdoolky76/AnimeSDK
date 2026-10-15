#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicatedCondition_TypeDefinitionIndex = 36874;

	enum class ReplicatedCondition : ::System::Byte
	{
		None = 0,
		InitialOnly = 1,
		OwnerOnly = 2,
		SkipOwner = 3,
		InitialOrOwner = 4,
	};
}
