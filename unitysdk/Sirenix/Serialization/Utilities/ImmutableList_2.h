#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int ImmutableList_2_TypeDefinitionIndex = 7672;

	template <typename T1, typename T2>
	class ImmutableList_2 : public ::System::Object
	{
	public:
		T1 innerList; // 0x0
	};
}
