#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int WriteDeferredDictionary_2_ModifyRequest_TypeDefinitionIndex = 8693;

	template <typename T1, typename T2>
	struct alignas(8) WriteDeferredDictionary_2_ModifyRequest
	{
		::System::Boolean IsAdd; // 0x0
		T1 Key; // 0x0
		T2 Value; // 0x0
	};
}
