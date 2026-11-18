#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetView_3_Element_TypeDefinitionIndex = 9105;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeHashSetView_3_Element
	{
		T1 Item; // 0x0
		::Foundation::Container::NativeHashSetElementId Next; // 0x0
		::System::Int32 BucketIndex; // 0x0
	};
}
