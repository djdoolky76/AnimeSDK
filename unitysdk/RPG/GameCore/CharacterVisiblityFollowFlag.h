#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisiblityFollowFlag_TypeDefinitionIndex = 24644;

	enum class CharacterVisiblityFollowFlag : ::System::UInt16
	{
		None = 0,
		FollowVisible = 1,
		FollowInvisible = 2,
		TransmitVisible = 4,
		TransmitInvisible = 8,
		Follow = 3,
		Transmit = 12,
	};
}
