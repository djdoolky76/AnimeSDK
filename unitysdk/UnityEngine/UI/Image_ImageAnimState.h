#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ColorMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI
{
	struct alignas(4) Image_ImageAnimState
	{
		::UnityEngine::Color color; // 0x10
		::System::Single fillAmount; // 0x20
		::System::Boolean maskable; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::ColorMode colorMode; // 0x28
	};
}
