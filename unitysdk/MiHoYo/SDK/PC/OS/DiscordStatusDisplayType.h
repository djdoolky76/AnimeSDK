#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordStatusDisplayType_TypeDefinitionIndex = 19799;

	enum class DiscordStatusDisplayType : ::System::Int32
	{
		NotSet = -1,
		Name = 0,
		State = 1,
		Details = 2,
	};
}
