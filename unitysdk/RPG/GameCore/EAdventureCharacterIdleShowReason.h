#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAdventureCharacterIdleShowReason : ::System::Int32
	{
		Default = 0,
		Puzzle = 1,
		TrainParty = 2,
		TrainBuild = 3,
	};
}
