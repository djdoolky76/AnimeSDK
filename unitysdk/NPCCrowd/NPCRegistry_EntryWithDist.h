#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistry_EntryWithDist_TypeDefinitionIndex = 92446;

	struct alignas(4) NPCRegistry_EntryWithDist
	{
		::NPCCrowd::NPCRegistryEntry entry; // 0x10
		::System::Single distanceSq; // 0x60
	};
}
