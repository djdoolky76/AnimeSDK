#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class B838AC1510EB2DCE;

namespace ABC::Collections::Pooled
{
	inline static constexpr unsigned int PooledList_1_TypeDefinitionIndex = 19598;

	template <typename T>
	class PooledList_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_s_emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(PooledList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::B838AC1510EB2DCE<T>* _pool; // 0x0
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
	};
}
