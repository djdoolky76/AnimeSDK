#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordPresenceType_TypeDefinitionIndex = 19794;

	enum class DiscordPresenceType : ::System::Int32
	{
		Playing = 0,
		Streaming = 1,
		Listening = 2,
		Watching = 3,
		CustomStatus = 4,
		Competing = 5,
		HangStatus = 6,
	};
}
