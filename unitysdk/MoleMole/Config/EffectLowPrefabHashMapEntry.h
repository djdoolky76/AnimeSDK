#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLowPrefabHashMapEntry_TypeDefinitionIndex = 73014;

	struct alignas(4) EffectLowPrefabHashMapEntry
	{
		::System::UInt64 sourceHash; // 0x10
		::System::UInt64 lowPrefabHash; // 0x18
	};
}
