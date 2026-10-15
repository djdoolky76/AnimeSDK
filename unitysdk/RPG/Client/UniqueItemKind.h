#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UniqueItemKind : ::System::Int32
	{
		None = 0,
		ServerUnique = 1,
		Pet = 2,
	};
}
