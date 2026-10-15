#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class OfflineMessageSenderType : ::System::Int32
	{
		System = 1,
		Self = 2,
		Other = 3,
	};
}
