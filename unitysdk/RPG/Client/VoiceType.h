#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class VoiceType : ::System::Int32
	{
		None = 0,
		Healing = 1,
		JoinTeam = 2,
	};
}
