#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAuthStatus_TypeDefinitionIndex = 19878;

	enum class HoYoChannelAuthStatus : ::System::Int32
	{
		SignIn = 0,
		SignOut = 1,
	};
}
