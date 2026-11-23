#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_SlotUsageEntry_TypeDefinitionIndex = 13219;

	struct alignas(8) VisualTreeAsset_SlotUsageEntry
	{
		::System::String* slotName; // 0x10
		::System::Int32 assetId; // 0x18
	};
}
