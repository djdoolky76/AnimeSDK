#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int PreValidationFailureReason_TypeDefinitionIndex = 79780;

	enum class PreValidationFailureReason : ::System::Int32
	{
		None = 0,
		RecipeLocked = 1,
		NoStock = 2,
		NoFinishedDish = 3,
		TargetBlocked = 4,
		NoAvailableSource = 5,
		NoReadyOccupant = 6,
		NoLandingSlot = 7,
	};
}
