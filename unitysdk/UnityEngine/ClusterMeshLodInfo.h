#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(8) ClusterMeshLodInfo
	{
		::System::UInt64 MeshHash; // 0x10
		::PVOID ClustersInfo; // 0x18
		::System::UInt32 ClustersInfoCount; // 0x20
		::System::Single MaxDistance; // 0x24
	};
}
