#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace TMPro
{
	inline static constexpr unsigned int FastAction_1_TypeDefinitionIndex = 44533;

	template <typename T>
	class FastAction_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Action_1<::System::Object*>*>* delegates; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Action_1<::System::Object*>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<::System::Object*>*>*>* lookup; // 0x0
	};
}
