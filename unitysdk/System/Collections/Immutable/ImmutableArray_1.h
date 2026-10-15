#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_1_TypeDefinitionIndex = 6615;

	template <typename T>
	struct alignas(8) ImmutableArray_1
	{
		::Il2CppArray<T>* array; // 0x0
		static ::System::Collections::Immutable::ImmutableArray_1<T>* StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableArray_1<T>*)UnitySDK::FromName("System.Collections.Immutable", "ImmutableArray`1")->GetStaticField(0x0);
		}

	};
}
