#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCStateTreeProcessor_ExternalDataCollector_1_TypeDefinitionIndex = 60694;

	template <typename T>
	struct alignas(8) NPCStateTreeProcessor_ExternalDataCollector_1
	{
		::System::Int32 _index; // 0x0
		::UnrealTypes::RawPtr_1<T> _job; // 0x0
	};
}
