#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OFPJBGCDOMK_GDNCGLOMHGD_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x74C9D0)

inline static constexpr unsigned int OFPJBGCDOMK_GDNCGLOMHGD_TypeDefinitionIndex = 83044;

struct alignas(4) OFPJBGCDOMK_GDNCGLOMHGD
{
	::UnityEngine::Vector3 OIHKMFGFFHD; // 0x10
	::UnityEngine::Vector3 GKDIPNMPMJE; // 0x1C
	::System::Single AFIKJAIPLNG; // 0x28

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPJBGCDOMK_GDNCGLOMHGD_PNNJKJEOHAL_OFFSET))(this);
	}
};
