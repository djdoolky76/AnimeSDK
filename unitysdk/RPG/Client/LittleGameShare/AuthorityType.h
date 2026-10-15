#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int AuthorityType_TypeDefinitionIndex = 36884;

	enum class AuthorityType : ::System::Byte
	{
		None = 0,
		Autonomous = 1,
		ServerAuthority = 2,
		Max = 3,
	};
}
