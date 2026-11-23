#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int CustomPosData_TypeDefinitionIndex = 16757;

	struct alignas(4) CustomPosData
	{
		::UnityEngine::Vector3 localPosition; // 0x10
		::UnityEngine::Quaternion localRotation; // 0x1C
		::System::Single lerpDistance; // 0x2C
	};
}
