#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeBitArraySetIndexEnumerator.h"
#include "unitysdk/Foundation/Container/Pointer_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_Enumerator_TypeDefinitionIndex = 9056;

	template <typename T1, typename T2>
	struct alignas(8) NativeSparseArrayView_2_Enumerator
	{
		::Foundation::Container::Pointer_1<T1> _data; // 0x0
		::Foundation::Container::NativeBitArraySetIndexEnumerator _indexEnumerator; // 0x0
	};
}
