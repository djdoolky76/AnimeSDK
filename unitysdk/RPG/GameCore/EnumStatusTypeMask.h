#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EnumStatusTypeMask : ::System::Int32
	{
		Unknown = 1,
		Buff = 2,
		Debuff = 4,
		Other = 8,
		All = 65535,
	};
}
