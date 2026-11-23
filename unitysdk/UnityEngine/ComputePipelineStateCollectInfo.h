#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_COMPUTEPIPELINESTATECOLLECTINFO_GETHASH_OFFSET UNITYSDK_OFFSET(0x410A360)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputePipelineStateCollectInfo_TypeDefinitionIndex = 17008;

	struct alignas(8) ComputePipelineStateCollectInfo
	{
		::System::String* shaderName; // 0x10
		::System::UInt32 kernelIndex; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* localKeywords; // 0x20

		::System::UInt64 GetHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEPIPELINESTATECOLLECTINFO_GETHASH_OFFSET))(this);
		}
	};
}
