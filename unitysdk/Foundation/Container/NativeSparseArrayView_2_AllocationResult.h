#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_AllocationResult_TypeDefinitionIndex = 9057;

	template <typename T1, typename T2>
	struct alignas(4) NativeSparseArrayView_2_AllocationResult
	{
		static ::System::Object** StaticGet_Null()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NativeSparseArrayView_2_AllocationResult_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int64 Index; // 0x0
		::System::IntPtr Pointer; // 0x0
	};
}
