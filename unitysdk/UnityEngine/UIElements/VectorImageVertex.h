#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VectorImageVertex_TypeDefinitionIndex = 13473;

	struct alignas(4) VectorImageVertex
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::A32676FCB736C8E8 tint; // 0x1C
		::UnityEngine::Vector2 uv; // 0x20
		::System::UInt32 settingIndex; // 0x28
		::UnityEngine::A32676FCB736C8E8 flags; // 0x2C
		::UnityEngine::E8984F4E44AE20E5 circle; // 0x30
	};
}
