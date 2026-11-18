#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int ImmutableHashSet_1_TypeDefinitionIndex = 6501;

	template <typename T>
	class ImmutableHashSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<T>* hashSet; // 0x0
	};
}
