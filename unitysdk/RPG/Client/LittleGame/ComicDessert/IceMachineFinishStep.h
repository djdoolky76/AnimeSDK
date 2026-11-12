#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int IceMachineFinishStep_TypeDefinitionIndex = 44741;

	enum class IceMachineFinishStep : ::System::Int32
	{
		Opening = 0,
		Ready = 1,
		Filling = 2,
		Closing = 3,
	};
}
