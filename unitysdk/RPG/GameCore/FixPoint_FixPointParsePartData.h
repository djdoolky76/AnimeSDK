#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore
{
	struct alignas(4) FixPoint_FixPointParsePartData
	{
		::RPG::GameCore::FixPoint Value; // 0x10
		::System::Int64 RawValue; // 0x10
		::System::Int32 I0; // 0x10
		::System::Int32 I1; // 0x14
	};
}
