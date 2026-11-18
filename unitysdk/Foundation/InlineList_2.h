#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int InlineList_2_TypeDefinitionIndex = 9034;

	template <typename T1, typename T2>
	struct alignas(8) InlineList_2
	{
		static ::System::UInt32* StaticGet_InlineCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(InlineList_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T1 InlineStorage; // 0x0
		::Il2CppArray<T2>* SecondaryStorage; // 0x0
		::System::Int32 _size; // 0x0
		::System::UInt32 _capacity; // 0x0
	};
}
