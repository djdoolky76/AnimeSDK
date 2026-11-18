#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int LodLevelOverrideEntry_TypeDefinitionIndex = 47457;

	struct alignas(4) LodLevelOverrideEntry
	{
		::System::Boolean sameAsPrevious; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single distanceBias; // 0x14
	};
}
