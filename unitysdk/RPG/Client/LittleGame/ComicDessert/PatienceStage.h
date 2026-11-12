#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int PatienceStage_TypeDefinitionIndex = 44755;

	enum class PatienceStage : ::System::Int32
	{
		Happy = 0,
		Calm = 1,
		Angry = 2,
	};
}
