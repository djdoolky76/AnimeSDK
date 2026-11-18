#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapIndexBlockRef_TypeDefinitionIndex = 7692;

	struct alignas(4) NapIndexBlockRef
	{
		::System::UInt64 blockHashName; // 0x10
		::System::Byte location; // 0x18
	};
}
