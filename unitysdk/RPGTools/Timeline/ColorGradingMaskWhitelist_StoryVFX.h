#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPGTools::Timeline
{
	struct alignas(8) ColorGradingMaskWhitelist_StoryVFX
	{
		::System::String* UniqueName; // 0x10
		::System::Single FadeTime; // 0x18
	};
}
