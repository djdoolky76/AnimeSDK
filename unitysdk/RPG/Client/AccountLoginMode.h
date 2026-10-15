#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AccountLoginMode : ::System::Int32
	{
		eSDK = 0,
		eAccountId = 1,
	};
}
