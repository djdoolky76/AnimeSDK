#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeBitArrayData_2.h"
#include "unitysdk/Foundation/Container/NativeVectorData_4.h"
#include "unitysdk/Foundation/Container/SparseArrayFreeIndex.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayData_3_TypeDefinitionIndex = 9071;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeSparseArrayData_3
	{
		::Foundation::Container::NativeVectorData_4<::System::Object*, ::Foundation::Container::SparseArrayFreeIndex, T1, T2> _data; // 0x0
		::Foundation::Container::NativeBitArrayData_2<::Foundation::Container::EmptyUserData, T2> _allocationFlags; // 0x0
	};
}
