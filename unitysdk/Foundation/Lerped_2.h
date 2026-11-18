#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LerpFunc.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Lerped_2_TypeDefinitionIndex = 8960;

	template <typename T1, typename T2>
	struct alignas(8) Lerped_2
	{
		::System::Double _beginTimestamp; // 0x0
		::System::Double _duration; // 0x0
		T1 _begin; // 0x0
		T1 _end; // 0x0
		::Foundation::LerpFunc _easingFunc; // 0x0
		::System::Single _metaParam; // 0x0
		T2 _lerpFunc; // 0x0
	};
}
