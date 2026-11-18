#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int NativeVariableArray_1_TypeDefinitionIndex = 8775;

	template <typename T>
	struct alignas(8) NativeVariableArray_1
	{
		static ::Foundation::NativeVariableArray_1<T>* StaticGet_Null()
		{
			return (::Foundation::NativeVariableArray_1<T>*)Il2CppClass::FromTypeDefinitionIndex(NativeVariableArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Foundation::NativeMemoryView_1<T> _handle; // 0x0
	};
}
