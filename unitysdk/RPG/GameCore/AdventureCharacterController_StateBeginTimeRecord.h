#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	struct alignas(4) AdventureCharacterController_StateBeginTimeRecord
	{
		::System::Int32 Hash; // 0x10
		::System::Single BeginTime; // 0x14
	};
}
