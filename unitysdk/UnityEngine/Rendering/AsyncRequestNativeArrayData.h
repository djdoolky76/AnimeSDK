#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncRequestNativeArrayData_TypeDefinitionIndex = 6147;

	struct alignas(8) AsyncRequestNativeArrayData
	{
		::PVOID nativeArrayBuffer; // 0x10
		::System::Int64 lengthInBytes; // 0x18
	};
}
