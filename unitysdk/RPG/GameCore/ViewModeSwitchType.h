#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ViewModeSwitchType : ::System::Int32
	{
		All = 0,
		Enter = 1,
		EnterTransition = 2,
		Exist = 3,
		ExistTransition = 4,
	};
}
