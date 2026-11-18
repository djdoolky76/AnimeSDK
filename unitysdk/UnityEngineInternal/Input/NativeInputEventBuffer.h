#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputEventBuffer_TypeDefinitionIndex = 27444;

	struct alignas(8) NativeInputEventBuffer
	{
		::PVOID eventBuffer; // 0x10
		::System::Int32 eventCount; // 0x18
		::System::Int32 sizeInBytes; // 0x1C
		::System::Int32 capacityInBytes; // 0x20
	};
}
