#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

	struct alignas(4) KBPPKMAJGCG_InstanceRelativeData
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector4 rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C
	};
