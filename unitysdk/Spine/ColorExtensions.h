#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define SPINE_COLOREXTENSIONS_CLAMPRGB_OFFSET UNITYSDK_OFFSET(0x1FF91590)
#define SPINE_COLOREXTENSIONS_CLAMP_OFFSET UNITYSDK_OFFSET(0x1FF914F0)
#define SPINE_COLOREXTENSIONS_RGBA8888TOCOLOR_OFFSET UNITYSDK_OFFSET(0x1FF91650)
#define SPINE_COLOREXTENSIONS_XRGB888TOCOLOR_OFFSET UNITYSDK_OFFSET(0x1FF916A0)

namespace Spine
{
	inline static constexpr unsigned int ColorExtensions_TypeDefinitionIndex = 32985;

	class ColorExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Color Clamp(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_COLOREXTENSIONS_CLAMP_OFFSET))(color);
		}

		static ::UnityEngine::Color ClampRGB(::UnityEngine::Color color)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_COLOREXTENSIONS_CLAMPRGB_OFFSET))(color);
		}

		static ::UnityEngine::Color RGBA8888ToColor(::System::UInt32 rgba8888)
		{
			return ((::UnityEngine::Color(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SPINE_COLOREXTENSIONS_RGBA8888TOCOLOR_OFFSET))(rgba8888);
		}

		static ::UnityEngine::Color XRGB888ToColor(::System::UInt32 xrgb888)
		{
			return ((::UnityEngine::Color(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SPINE_COLOREXTENSIONS_XRGB888TOCOLOR_OFFSET))(xrgb888);
		}
	};
}
