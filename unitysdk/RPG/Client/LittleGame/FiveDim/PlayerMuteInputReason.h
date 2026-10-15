#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class PlayerMuteInputReason : ::System::Int32
	{
		None = 0,
		Default = 2,
		GravityBoard = 4,
		Interact = 8,
		WindowStage = 16,
	};
}
