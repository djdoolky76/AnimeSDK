#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VoiceType_TypeDefinitionIndex = 62760;

	enum class VoiceType : ::System::Int32
	{
		None = 0,
		Healing = 1,
		JoinTeam = 2,
	};
}
