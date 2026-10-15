#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { template <typename T1, typename T2> class MHashLinkedListNode_2; }
namespace RPG::Client { template <typename T> class MLinkedList_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client
{
	template <typename T1, typename T2>
	class MHashLinkedList_2 : public ::System::Object
	{
	public:
		::RPG::Client::MLinkedList_1<T1>* _LinkedList; // 0x0
		::System::Collections::Generic::Dictionary_2<T2, ::RPG::Client::MHashLinkedListNode_2<T2, T1>*>* _NodeDic; // 0x0
	};
}
