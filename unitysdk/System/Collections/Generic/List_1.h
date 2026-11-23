#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic
{
	inline static constexpr unsigned int List_1_TypeDefinitionIndex = 11266;

	template <typename T>
	class List_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_s_emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(List_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
