#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideStageItemBehaviour_StageItemInfo_TypeDefinitionIndex = 49178;

	struct alignas(8) HideStageItemBehaviour_StageItemInfo
	{
		::System::String* BlockAlias; // 0x10
		::System::String* PrefabAlias; // 0x18
	};
}
