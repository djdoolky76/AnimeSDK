#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_TypeDefinitionIndex = 8235;

	template <typename T1, typename T2>
	class LinkedHashMap_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*>* _map; // 0x0
		::System::Collections::Generic::LinkedList_1<::System::Object*>* _order; // 0x0
		::System::Boolean _accessOrder; // 0x0
	};
}
