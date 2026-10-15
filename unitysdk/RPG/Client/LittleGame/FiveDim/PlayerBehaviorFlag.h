#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class PlayerBehaviorFlag : ::System::Int32
	{
		None = 0,
		Invulnerable = 1,
		Invincible = 2,
		DashInvincible = 4,
		PortalInvincible = 8,
	};
}
