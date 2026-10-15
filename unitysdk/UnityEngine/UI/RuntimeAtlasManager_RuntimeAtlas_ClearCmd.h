#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine::UI
{
	struct alignas(4) RuntimeAtlasManager_RuntimeAtlas_ClearCmd
	{
		::UnityEngine::Vector2Int dstPos; // 0x10
		::System::Int32 blockSize; // 0x18
	};
}
