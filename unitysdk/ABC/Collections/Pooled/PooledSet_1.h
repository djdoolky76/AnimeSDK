#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E519989062D53DE5;
template <typename T> class B838AC1510EB2DCE;
template <typename T> class FA945EDA46A8CB01;

namespace ABC::Collections::Pooled
{
	inline static constexpr unsigned int PooledSet_1_TypeDefinitionIndex = 19651;

	template <typename T>
	class PooledSet_1 : public ::System::Object
	{
	public:
		static ::B838AC1510EB2DCE<::System::Int32>** StaticGet_s_bucketPool()
		{
			return (::B838AC1510EB2DCE<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PooledSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::B838AC1510EB2DCE<::System::Object*>** StaticGet_s_slotPool()
		{
			return (::B838AC1510EB2DCE<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PooledSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _slots; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _lastIndex; // 0x0
		::System::Int32 _freeList; // 0x0
		::FA945EDA46A8CB01<T>* _comparer; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _clearOnFree; // 0x0
		::E519989062D53DE5* _siInfo; // 0x0
	};
}
