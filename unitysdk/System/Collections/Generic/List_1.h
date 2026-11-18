#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int List_1_TypeDefinitionIndex = 1555;

	template <typename T>
	class List_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
	};
}
