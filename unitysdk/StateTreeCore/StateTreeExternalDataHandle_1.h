#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle.h"
#include "unitysdk/System/ValueType.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataHandle_1_TypeDefinitionIndex = 30980;

	template <typename T>
	struct alignas(4) StateTreeExternalDataHandle_1
	{
		::StateTreeCore::StateTreeExternalDataHandle ExternalDataHandle; // 0x0
	};
}
