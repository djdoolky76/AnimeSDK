#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_ManagedBatchEntry_TypeDefinitionIndex = 26861;

	struct alignas(4) NapNREHarness_ManagedBatchEntry
	{
		::System::Int32 rendererID; // 0x10
		::System::Boolean queryResult; // 0x14
	};
}
