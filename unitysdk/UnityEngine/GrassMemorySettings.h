#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_GRASSMEMORYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x41C4300)

namespace UnityEngine
{
	inline static constexpr unsigned int GrassMemorySettings_TypeDefinitionIndex = 21047;

	struct alignas(4) GrassMemorySettings
	{
		::System::UInt32 MaxPersistentGrassBlockCount; // 0x10
		::System::UInt32 MaxVisibleGrassBlockCount; // 0x14
		::System::UInt32 MaxVisibleRenderBatchCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRASSMEMORYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
