#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Immutable { class ImmutableDictionary; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	template <typename T1, typename T2>
	class ImmutableDictionary_2_Builder : public ::System::Object
	{
	public:
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Object* _comparers; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::ImmutableDictionary* _immutable; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
