#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNamePoolShard_1_TypeDefinitionIndex = 8842;

	template <typename T>
	struct alignas(8) FNamePoolShard_1
	{
		T _lock; // 0x0
		::System::UInt32 _usedSlots; // 0x0
		::System::UInt32 _capacityMask; // 0x0
		::PVOID _slots; // 0x0
		::PVOID _allocator; // 0x0
	};
}
