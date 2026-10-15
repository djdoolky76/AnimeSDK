#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SilverWolfState : ::System::Int32
	{
		SilverWolfStateLock = 0,
		SilverWolfStatePremission = 1,
		SilverWolfStateUnlock = 2,
	};
}
