#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPGTools::Timeline
{
	struct alignas(8) ColorGradingMaskWhitelist_StageItem
	{
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
		::System::Single FadeTime; // 0x20
	};
}
