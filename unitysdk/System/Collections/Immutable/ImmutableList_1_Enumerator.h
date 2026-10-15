#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/RefAsValueType_1.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Collections::Immutable { template <typename T> class SecurePooledObject_1; }

namespace System::Collections::Immutable
{
	template <typename T>
	struct alignas(8) ImmutableList_1_Enumerator
	{
		::System::Object* _builder; // 0x0
		::System::Int32 _poolUserId; // 0x0
		::System::Int32 _startIndex; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _remainingCount; // 0x0
		::System::Boolean _reversed; // 0x0
		::System::Object* _root; // 0x0
		::System::Collections::Immutable::SecurePooledObject_1<::System::Collections::Generic::Stack_1<::System::Collections::Immutable::RefAsValueType_1<::System::Object*>>*>* _stack; // 0x0
		::System::Object* _current; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
