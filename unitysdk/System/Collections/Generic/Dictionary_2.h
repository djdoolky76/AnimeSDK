#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_TypeDefinitionIndex = 1535;

	template <typename T1, typename T2>
	class Dictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::Il2CppArray<::System::Object*>* entries; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Int32 freeList; // 0x0
		::System::Int32 freeCount; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::System::Object* keys; // 0x0
		::System::Object* values; // 0x0
	};
}
