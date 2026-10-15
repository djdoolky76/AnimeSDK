#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class EStateParamModifyTime : ::System::Int32
	{
		Enter = 0,
		Exit = 1,
		EnterTransition = 2,
		ExitTransition = 3,
	};
}
