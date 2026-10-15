#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_TypeDefinitionIndex = 35858;

	template <typename T1, typename T2>
	class MapField_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, ::System::Collections::Generic::LinkedListNode_1<::System::Collections::Generic::KeyValuePair*>*>* map; // 0x0
		::System::Collections::Generic::LinkedList_1<::System::Collections::Generic::KeyValuePair*>* list; // 0x0
	};
}
