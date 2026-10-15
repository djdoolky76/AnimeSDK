#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AvatarChangeOption : ::System::UInt32
	{
		None = 0,
		InheritProperty = 1,
		InheritAvatarBaseType = 2,
		InheritDamageType = 4,
		Option_Default = 3,
	};
}
