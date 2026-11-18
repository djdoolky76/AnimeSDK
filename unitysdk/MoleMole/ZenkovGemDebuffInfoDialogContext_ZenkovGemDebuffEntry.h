#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry_TypeDefinitionIndex = 61032;

	struct alignas(4) ZenkovGemDebuffInfoDialogContext_ZenkovGemDebuffEntry
	{
		::System::Int32 GemDebuffKey; // 0x10
		::System::Int32 OwnerItemId; // 0x14
		::System::Int32 Stack; // 0x18
	};
}
