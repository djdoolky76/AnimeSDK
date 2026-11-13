#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTEVideoPrepareState_TypeDefinitionIndex = 74962;

	enum class PlayVideoQTEVideoPrepareState : ::System::Int32
	{
		NotStarted = 0,
		Preparing = 1,
		Ready = 2,
	};
}
