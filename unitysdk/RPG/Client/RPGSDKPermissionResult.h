#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RPGSDKPermissionResult : ::System::Int32
	{
		Granted = 0,
		Rejected = 1,
		RejectedNoPrompt = 2,
	};
}
