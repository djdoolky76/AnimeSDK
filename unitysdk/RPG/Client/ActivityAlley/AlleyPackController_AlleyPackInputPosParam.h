#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	struct alignas(4) AlleyPackController_AlleyPackInputPosParam
	{
		::System::Boolean IsValid; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single PosX; // 0x14
		::System::Single PosY; // 0x18
		::System::Single PosZ; // 0x1C
	};
}
