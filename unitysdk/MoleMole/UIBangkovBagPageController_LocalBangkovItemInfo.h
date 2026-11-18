#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovItemInfoWidgetController_ItemInfoFromDirection.h"
#include "unitysdk/System/ValueType.h"

class FMHDMLBDIJC;

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_LocalBangkovItemInfo_TypeDefinitionIndex = 54349;

	struct alignas(8) UIBangkovBagPageController_LocalBangkovItemInfo
	{
		::System::Int32 ItemId; // 0x10
		::System::Int32 ItemNum; // 0x14
		::MoleMole::UIBangkovItemInfoWidgetController_ItemInfoFromDirection Direction; // 0x18
		::System::Byte _padding0[0x4];
		::FMHDMLBDIJC* KovBagIndex; // 0x20
	};
}
