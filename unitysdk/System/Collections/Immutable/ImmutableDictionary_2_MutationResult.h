#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_MutationResult_TypeDefinitionIndex = 6628;

	template <typename T1, typename T2>
	struct alignas(8) ImmutableDictionary_2_MutationResult
	{
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Int32 _countAdjustment; // 0x0
	};
}
