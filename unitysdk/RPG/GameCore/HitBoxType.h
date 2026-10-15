#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HitBoxType : ::System::Byte
	{
		eNone = 0,
		eBox3 = 1,
		eCapsule3 = 2,
	};
}
