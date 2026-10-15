#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_MutationResult_TypeDefinitionIndex = 6608;

	template <typename T>
	struct alignas(8) ImmutableHashSet_1_MutationResult
	{
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Int32 _count; // 0x0
		::System::Object* _countType; // 0x0
	};
}
