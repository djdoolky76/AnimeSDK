#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ScreenTransferActionState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Finish = 2,
	};
}
