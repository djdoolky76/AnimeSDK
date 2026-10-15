#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine
{
	struct alignas(8) MeshClusterInfo
	{
		::PVOID ClusterIndexData; // 0x10
		::System::UInt32 ClusterIndexDataCount; // 0x18
		::System::Byte _padding0[0x4];
		::PVOID ClusterVertexData; // 0x20
		::System::UInt32 ClusterVertexDataCount; // 0x28
		::UnityEngine::Bounds ClusterAABB; // 0x2C
		::UnityEngine::Vector4 ClusterConeNormal; // 0x44
	};
}
