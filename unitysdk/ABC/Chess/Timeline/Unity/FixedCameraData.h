#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::Chess::Timeline::Unity
{
	inline static constexpr unsigned int FixedCameraData_TypeDefinitionIndex = 10149;

	struct alignas(4) FixedCameraData
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::System::Single FOV; // 0x2C
	};
}
