#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_PosSnapshotValue_TypeDefinitionIndex = 26860;

	struct alignas(4) NapNREHarness_PosSnapshotValue
	{
		::System::Int32 entityID; // 0x10
		::System::Int32 rootID; // 0x14
		::System::Int32 cullResult; // 0x18
	};
}
