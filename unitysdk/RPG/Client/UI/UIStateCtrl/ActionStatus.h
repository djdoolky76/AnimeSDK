#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI::UIStateCtrl
{
	enum class ActionStatus : ::System::Int32
	{
		Init = 0,
		Playing = 1,
		Completed = 2,
		Error = 3,
	};
}
