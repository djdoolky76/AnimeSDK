#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class FJMFECAAPHD;

namespace MoleMole
{
	inline static constexpr unsigned int TaskCompletionSourceNodeHandle_TypeDefinitionIndex = 45761;

	struct alignas(8) TaskCompletionSourceNodeHandle
	{
		::FJMFECAAPHD* node; // 0x10
	};
}
