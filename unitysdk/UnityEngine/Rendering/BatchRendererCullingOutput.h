#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingFlags.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingProjectionType.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingViewType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererCullingOutput_TypeDefinitionIndex = 6241;

	struct alignas(8) BatchRendererCullingOutput
	{
		::Unity::Jobs::JobHandle cullingJobsFence; // 0x10
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x20
		::PVOID cullingPlanes; // 0x60
		::System::Int32 cullingPlaneCount; // 0x68
		::System::Int32 receiverPlaneOffset; // 0x6C
		::System::Int32 receiverPlaneCount; // 0x70
		::System::Byte _padding0[0x4];
		::PVOID cullingSplits; // 0x78
		::System::Int32 cullingSplitCount; // 0x80
		::UnityEngine::Rendering::BatchCullingViewType viewType; // 0x84
		::UnityEngine::Rendering::BatchCullingProjectionType projectionType; // 0x88
		::UnityEngine::Rendering::BatchCullingFlags cullingFlags; // 0x8C
		::System::UInt64 viewID; // 0x90
		::System::UInt32 cullingLayerMask; // 0x98
		::System::Byte _padding1[0x4];
		::System::UInt64 sceneCullingMask; // 0xA0
		::PVOID drawCommands; // 0xA8
	};
}
