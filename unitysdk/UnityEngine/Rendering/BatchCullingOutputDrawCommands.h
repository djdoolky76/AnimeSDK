#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingOutputDrawCommands_TypeDefinitionIndex = 6236;

	struct alignas(8) BatchCullingOutputDrawCommands
	{
		::PVOID drawCommands; // 0x10
		::PVOID visibleInstances; // 0x18
		::PVOID drawRanges; // 0x20
		::PVOID instanceSortingPositions; // 0x28
		::PVOID drawCommandPickingInstanceIDs; // 0x30
		::System::Int32 drawCommandCount; // 0x38
		::System::Int32 visibleInstanceCount; // 0x3C
		::System::Int32 drawRangeCount; // 0x40
		::System::Int32 instanceSortingPositionFloatCount; // 0x44
	};
}
