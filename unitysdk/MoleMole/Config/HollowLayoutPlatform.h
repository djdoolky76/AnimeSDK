#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowLayoutPlatform_TypeDefinitionIndex = 79657;

	enum class HollowLayoutPlatform : ::System::Int32
	{
		None = 0,
		Console = 3,
		Mobile = 1,
		MobileConsole = 4,
		PC = 2,
		VirtualStick = 5,
	};
}
