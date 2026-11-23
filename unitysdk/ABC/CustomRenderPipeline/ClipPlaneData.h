#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int ClipPlaneData_TypeDefinitionIndex = 16560;

	struct alignas(4) ClipPlaneData
	{
		::UnityEngine::Vector3 localPosition; // 0x10
		::UnityEngine::Quaternion localRotation; // 0x1C
		::System::Single fadeDistance; // 0x2C
	};
}
