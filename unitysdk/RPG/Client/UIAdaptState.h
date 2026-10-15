#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UIAdaptState : ::System::Int32
	{
		None = 0,
		WaitAsyncLoadNode = 1,
		AdaptFinish = 2,
	};
}
