#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int LinkedList_1_TypeDefinitionIndex = 3013;

	template <typename T>
	class LinkedList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedListNode_1<T>* head; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Runtime::Serialization::SerializationInfo* _siInfo; // 0x0
	};
}
