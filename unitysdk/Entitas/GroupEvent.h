#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas
{
	enum class GroupEvent : ::System::Byte
	{
		Added = 0,
		Removed = 1,
		AddedOrRemoved = 2,
	};
}
