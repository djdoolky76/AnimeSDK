#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

	struct alignas(4) SWRTAsset_RTTriangle
	{
		::UnityEngine::Vector3 Pos0; // 0x10
		::UnityEngine::Vector3 Edge1; // 0x1C
		::UnityEngine::Vector3 Edge2; // 0x28
	};
