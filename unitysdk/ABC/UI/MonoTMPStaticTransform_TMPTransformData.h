#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::UI
{
	inline static constexpr unsigned int MonoTMPStaticTransform_TMPTransformData_TypeDefinitionIndex = 7422;

	struct alignas(4) MonoTMPStaticTransform_TMPTransformData
	{
		::UnityEngine::Vector2 Offset; // 0x10
		::UnityEngine::Vector2 Scale; // 0x18
		::UnityEngine::Vector2 ScaleAnchor; // 0x20
	};
}
