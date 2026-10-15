#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollection_1_EnumerableCollection_TypeDefinitionIndex = 35885;

	template <typename T>
	class CloneCollection_1_EnumerableCollection : public ::System::Object
	{
	public:
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
	};
}
