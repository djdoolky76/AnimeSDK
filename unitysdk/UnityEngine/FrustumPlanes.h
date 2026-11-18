#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FrustumPlanes_TypeDefinitionIndex = 5300;

	struct alignas(4) FrustumPlanes
	{
		::System::Single left; // 0x10
		::System::Single right; // 0x14
		::System::Single bottom; // 0x18
		::System::Single top; // 0x1C
		::System::Single zNear; // 0x20
		::System::Single zFar; // 0x24
	};
}
