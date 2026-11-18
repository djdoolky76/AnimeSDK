#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRESOURCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93E030)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskResourceInfo_TypeDefinitionIndex = 8267;

	struct alignas(4) AssetLoadTaskResourceInfo
	{
		::System::Int32 RunId; // 0x10
		::System::Byte _padding0[0x4];
		::Foundation::AssetRequestHandle Handle; // 0x18
		::System::Int32 TrackedHandleCount; // 0x38

		::System::Void _ctor(::System::Int32 runId, ::Foundation::AssetRequestHandle handle, ::System::Int32 trackedHandleCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::AssetRequestHandle, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRESOURCEINFO__CTOR_OFFSET))(this, runId, handle, trackedHandleCount);
		}
	};
}
