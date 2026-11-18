#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace UnityEngine
{
	inline static constexpr unsigned int BoneOverrideData_TypeDefinitionIndex = 6641;

	struct alignas(4) BoneOverrideData
	{
		::System::UInt32 pathHash; // 0x10
		::System::UInt32 flags; // 0x14
		::System::Byte _padding0[0x8];
		::UnityEngine::NapTransformData transforms; // 0x20
	};
}
