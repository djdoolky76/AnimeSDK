#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Arcade::BallsRace
{
	inline static constexpr unsigned int BrEntityType_TypeDefinitionIndex = 94209;

	enum class BrEntityType : ::System::Int32
	{
		Tile = 3,
		Arrow = 54,
		BestScore = 8,
		TimePoint = 5,
		WelcomeGuy = 56,
		Accelerate = 6,
		FakePlayer = 52,
		Player = 2,
		Pillar = 51,
		World = 1,
		None = 0,
		StartLine = 53,
		Spike = 4,
		FakeGeneral = 55,
		Decelerate = 7,
	};
}
