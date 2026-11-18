#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapIndexAssetRef_TypeDefinitionIndex = 7690;

	struct alignas(4) NapIndexAssetRef
	{
		::System::Int32 bundle; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 pathHash; // 0x18
	};
}
