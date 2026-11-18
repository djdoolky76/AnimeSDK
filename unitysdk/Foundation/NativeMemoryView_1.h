#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int NativeMemoryView_1_TypeDefinitionIndex = 9109;

	template <typename T>
	struct alignas(8) NativeMemoryView_1
	{
		static ::Foundation::NativeMemoryView_1<T>* StaticGet_Null()
		{
			return (::Foundation::NativeMemoryView_1<T>*)Il2CppClass::FromTypeDefinitionIndex(NativeMemoryView_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::PVOID _buffer; // 0x0
		::System::Int32 _stride; // 0x0
		::System::Int32 _length; // 0x0
	};
}
