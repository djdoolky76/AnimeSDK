#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePool___c__DisplayClass7_0_TypeDefinitionIndex = 76972;

	struct alignas(8) DepletablePool___c__DisplayClass7_0
	{
		::System::Collections::Generic::List_1<::System::UInt32>* pendingIds; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* seen; // 0x18
	};
}
