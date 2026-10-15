#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BVHData.h"

namespace UnityEngine
{
	struct alignas(8) BVHNode
	{
		::Il2CppArray<::UnityEngine::BVHData>* ChildDatas; // 0x10
		::Il2CppArray<::System::UInt32>* ExclusiveClusterIndices; // 0x18
	};
}
