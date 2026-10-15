#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace RPG::GameCore
{
	template <typename T1, typename T2>
	class TableLRUCache_2 : public ::System::Object
	{
	public:
		::System::Int32 totalVisit; // 0x0
		::System::Int32 hitVisit; // 0x0
		::System::Int32 _capacity; // 0x0
		::System::Object* _putInOper; // 0x0
		::System::Object* _takeOutOper; // 0x0
		::System::Object* _discardOper; // 0x0
		::System::Collections::Generic::LinkedList_1<::System::Object*>* _linkedList; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*>* _dictionary; // 0x0
		// static const ::System::Object DEFAULT_CAPACITY; // 0x0
	};
}
