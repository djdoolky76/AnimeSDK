#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	enum class ReferenceStrictCheckType : ::System::Byte
	{
		AlwaysEnable = 0,
		OnlyEnableWhenDevelopment = 1,
		OnlyEnableInEditor = 2,
		AlwaysDisable = 3,
	};
}
