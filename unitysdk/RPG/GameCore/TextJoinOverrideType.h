#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TextJoinOverrideType : ::System::Int32
	{
		TextJoinItem = 0,
		CustomText = 1,
		AvatarID = 2,
		TextJoinConditionalItem = 3,
	};
}
