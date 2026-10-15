#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/RefAsValueType_1.h"
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Collections::Immutable { template <typename T> class SecurePooledObject_1; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	template <typename T>
	struct alignas(8) SortedInt32KeyNode_1_Enumerator
	{
		::System::Int32 _poolUserId; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<T>* _root; // 0x0
		::System::Collections::Immutable::SecurePooledObject_1<::System::Collections::Generic::Stack_1<::System::Collections::Immutable::RefAsValueType_1<::System::Collections::Immutable::SortedInt32KeyNode_1<T>*>>*>* _stack; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<T>* _current; // 0x0
	};
}
