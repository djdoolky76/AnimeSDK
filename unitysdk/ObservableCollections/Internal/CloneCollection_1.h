#pragma once
#include "unitysdk/unitysdk.h"

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollection_1_TypeDefinitionIndex = 35884;

	template <typename T>
	struct alignas(8) CloneCollection_1
	{
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 length; // 0x0
	};
}
