#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int CacheLinkedList_1_TypeDefinitionIndex = 6307;

	template <typename T>
	class CacheLinkedList_1 : public ::System::Object
	{
	public:
		::System::Object* head; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Runtime::Serialization::SerializationInfo* siInfo; // 0x0
		::System::Collections::Generic::Queue_1<::System::Object*>* pool; // 0x0
		// static const ::System::String* VersionName; // 0x0
		// static const ::System::String* CountName; // 0x0
		// static const ::System::String* ValuesName; // 0x0
	};
}
