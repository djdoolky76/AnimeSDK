#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int IceMachineState_TypeDefinitionIndex = 44743;

	enum class IceMachineState : ::System::Int32
	{
		Default = 0,
		Stirring = 1,
		Making = 2,
		Finish = 3,
	};
}
