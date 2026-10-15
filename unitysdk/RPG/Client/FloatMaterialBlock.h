#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) FloatMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Value; // 0x14
	};
}
