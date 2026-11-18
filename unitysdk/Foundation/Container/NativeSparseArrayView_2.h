#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeBitArrayView_1.h"
#include "unitysdk/Foundation/Container/NativeVectorView_3.h"
#include "unitysdk/Foundation/Container/SparseArrayFreeIndex.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_TypeDefinitionIndex = 9055;

	template <typename T1, typename T2>
	struct alignas(8) NativeSparseArrayView_2
	{
		::Foundation::Container::NativeVectorView_3<::System::Object*, ::Foundation::Container::SparseArrayFreeIndex, T1> _data; // 0x0
		::Foundation::Container::NativeBitArrayView_1<::Foundation::Container::EmptyUserData> _allocationFlags; // 0x0
	};
}
