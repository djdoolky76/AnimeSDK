#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int NameValueSortedArray_1_TypeDefinitionIndex = 9102;

	template <typename T>
	struct alignas(8) NameValueSortedArray_1
	{
		static ::Foundation::NameValueSortedArray_1<T>* StaticGet_Null()
		{
			return (::Foundation::NameValueSortedArray_1<T>*)Il2CppClass::FromTypeDefinitionIndex(NameValueSortedArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::NativeVariableArray_1<T> _values; // 0x0
	};
}
