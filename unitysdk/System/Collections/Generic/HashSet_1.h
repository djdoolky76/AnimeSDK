#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int HashSet_1_TypeDefinitionIndex = 3696;

	template <typename T>
	class HashSet_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::System::Object*>* _slots; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _lastIndex; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
		::System::Int32 _version; // 0x0
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x0
	};
}
