#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRuleDialogPopWindowController_TabData_TypeDefinitionIndex = 64097;

	struct alignas(8) UIAutoBattleRuleDialogPopWindowController_TabData
	{
		::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* TypeName; // 0x18
	};
}
