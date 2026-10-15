#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) UIAdventureMinimap_SectionAnimInstance
	{
		::System::Single LifeTime; // 0x10
		::System::Int32 SectionImageIdx; // 0x14
		::System::Int32 ZoneID; // 0x18
		::System::Int32 SectionIdx; // 0x1C
	};
}
