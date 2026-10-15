#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextProcessingStack_1_TypeDefinitionIndex = 44668;

	template <typename T>
	struct alignas(8) TMP_TextProcessingStack_1
	{
		::Il2CppArray<T>* itemStack; // 0x0
		::System::Int32 index; // 0x0
		T m_DefaultItem; // 0x0
		::System::Int32 m_Capacity; // 0x0
		::System::Int32 m_RolloverSize; // 0x0
		::System::Int32 m_Count; // 0x0
		// static const ::System::Object k_DefaultCapacity; // 0x0
	};
}
