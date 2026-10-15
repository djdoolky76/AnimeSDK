#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(8) AudienceLayoutConfig_DensityLevel
	{
		::System::Int32 num; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* weights; // 0x18
	};
}
