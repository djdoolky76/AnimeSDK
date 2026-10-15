#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPGTools::Timeline
{
	struct alignas(8) HideStageItemBehaviour_StageItemInfo
	{
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
	};
}
