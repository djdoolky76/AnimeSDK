#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	template <typename T>
	struct alignas(8) CacheLinkedList_1_Enumerator
	{
		::System::Collections::Generic::CacheLinkedList_1<T>* list; // 0x0
		::System::Object* node; // 0x0
		::System::Int32 version; // 0x0
		T current; // 0x0
		::System::Int32 index; // 0x0
		::System::Runtime::Serialization::SerializationInfo* siInfo; // 0x0
		// static const ::System::String* LinkedListName; // 0x0
		// static const ::System::String* CurrentValueName; // 0x0
		// static const ::System::String* VersionName; // 0x0
		// static const ::System::String* IndexName; // 0x0
	};
}
