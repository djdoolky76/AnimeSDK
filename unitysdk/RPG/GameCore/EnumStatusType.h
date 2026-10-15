#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EnumStatusType : ::System::Int32
	{
		Unknown = 0,
		Buff = 1,
		Debuff = 2,
		Other = 3,
	};
}
