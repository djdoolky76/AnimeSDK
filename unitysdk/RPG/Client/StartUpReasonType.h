#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class StartUpReasonType : ::System::Int32
	{
		eInit = 0,
		eReloadStartUpAsset = 1,
	};
}
