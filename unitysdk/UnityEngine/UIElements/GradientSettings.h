#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B273DD862F109E11.h"
#include "unitysdk/A418C49FA6A8C1F7/FC23991CF0B89EFB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E79D6DCE4DE1BCF3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GradientSettings_TypeDefinitionIndex = 13361;

	struct alignas(4) GradientSettings
	{
		::A418C49FA6A8C1F7::FC23991CF0B89EFB gradientType; // 0x10
		::A418C49FA6A8C1F7::B273DD862F109E11 addressMode; // 0x14
		::UnityEngine::Vector2 radialFocus; // 0x18
		::UnityEngine::E79D6DCE4DE1BCF3 location; // 0x20
	};
}
