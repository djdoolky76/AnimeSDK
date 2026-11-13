#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTEStage_TypeDefinitionIndex = 74944;

	enum class PlayVideoQTEStage : ::System::Int32
	{
		Start = 0,
		Loop = 1,
		End = 2,
	};
}
