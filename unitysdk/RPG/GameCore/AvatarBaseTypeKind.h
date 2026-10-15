#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AvatarBaseTypeKind : ::System::UInt32
	{
		Main = 1,
		Sub = 2,
		Dynamic = 4,
		Latest = 8,
		MainAndSub = 3,
		All = 7,
	};
}
