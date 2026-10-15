#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) ClusterPage
	{
		::System::UInt32 PartStart; // 0x10
		::System::UInt32 PartNum; // 0x14
		::System::UInt32 NumClusters; // 0x18
		::System::UInt32 MaxDepth; // 0x1C
	};
}
