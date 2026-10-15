#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine
{
	struct alignas(8) ClusterIRIType
	{
		::System::UInt64 MaterialHash; // 0x10
		::PVOID MaterialParamData; // 0x18
		::System::UInt32 MaterialParamDataCount; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 TexHashe0; // 0x28
		::System::UInt64 TexHashe1; // 0x30
		::System::UInt64 TexHashe2; // 0x38
		::System::Int32 Texture0; // 0x40
		::System::Int32 Texture1; // 0x44
		::System::Int32 Texture2; // 0x48
		::UnityEngine::Bounds MeshLocalAABB; // 0x4C
		::System::Byte _padding1[0x4];
		::PVOID MeshLodInfos; // 0x68
		::System::UInt32 MeshLodInfosCount; // 0x70
		::System::UInt32 BeginInMatrixNativeArray; // 0x74
		::System::UInt32 CountInMatrixNativeArray; // 0x78
	};
}
