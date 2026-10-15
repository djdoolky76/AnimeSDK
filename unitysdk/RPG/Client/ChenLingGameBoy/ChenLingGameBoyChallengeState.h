#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingGameBoy
{
	enum class ChenLingGameBoyChallengeState : ::System::Int32
	{
		Unknown = 0,
		Complete = 1,
		Positive = 2,
		Negative = 3,
	};
}
