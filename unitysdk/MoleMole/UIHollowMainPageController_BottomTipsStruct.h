#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowMainPageController_BottomTypesEnum.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_BottomTipsStruct_TypeDefinitionIndex = 84611;

	struct alignas(8) UIHollowMainPageController_BottomTipsStruct
	{
		::MoleMole::UIHollowMainPageController_BottomTypesEnum tipsType; // 0x10
		::System::Int32 priority; // 0x14
		::System::Boolean NeedFastForwardIcon; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* displayKey; // 0x20
	};
}
