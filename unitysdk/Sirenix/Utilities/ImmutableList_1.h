#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int ImmutableList_1_TypeDefinitionIndex = 6506;

	template <typename T>
	class ImmutableList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* innerList; // 0x0
	};
}
