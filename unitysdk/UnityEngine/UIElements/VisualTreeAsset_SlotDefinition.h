#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeAsset_SlotDefinition_TypeDefinitionIndex = 13218;

	struct alignas(8) VisualTreeAsset_SlotDefinition
	{
		::System::String* name; // 0x10
		::System::Int32 insertionPointId; // 0x18
	};
}
