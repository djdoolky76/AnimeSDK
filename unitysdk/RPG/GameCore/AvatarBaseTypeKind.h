#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeKind_TypeDefinitionIndex = 10435;

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
