#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int DiscordServerRetCode_TypeDefinitionIndex = 19630;

	enum class DiscordServerRetCode : ::System::Int32
	{
		NotBound = 3320,
		TokenAbsent = 3321,
		TokenRefreshFailed = 3322,
		RpDisabled = 3323,
		GameUidNotOwned = 3324,
	};
}
