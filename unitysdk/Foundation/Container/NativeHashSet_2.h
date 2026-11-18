#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeHashSetData_4.h"
#include "unitysdk/Foundation/Native/RawPointer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSet_2_TypeDefinitionIndex = 8830;

	template <typename T1, typename T2>
	struct alignas(8) NativeHashSet_2
	{
		::Foundation::Container::NativeHashSetData_4<::Foundation::Container::EmptyUserData, T1, T2, ::Foundation::Native::RawPointer> _data; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
