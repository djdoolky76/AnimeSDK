#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	template <typename T1, typename T2>
	struct alignas(8) ImmutableDictionary_2_MutationInput
	{
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Object* _comparers; // 0x0
	};
}
