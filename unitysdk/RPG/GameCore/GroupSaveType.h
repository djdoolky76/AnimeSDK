#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GroupSaveType : ::System::Int32
	{
		Temporary = 0,
		Permanent = 1,
		Reset = 2,
	};
}
