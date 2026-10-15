#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class BossTransitionReason : ::System::Int32
	{
		None = 0,
		ChangePhase = 1,
		BossDieToFadeout = 2,
		FinishGame = 3,
	};
}
