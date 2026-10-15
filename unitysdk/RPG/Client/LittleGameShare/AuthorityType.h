#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class AuthorityType : ::System::Byte
	{
		None = 0,
		Autonomous = 1,
		ServerAuthority = 2,
		Max = 3,
	};
}
