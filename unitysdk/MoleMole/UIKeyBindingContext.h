#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1760F680)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingContext_TypeDefinitionIndex = 43807;

	class UIKeyBindingContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AIOFAMODPOO InputDevice; // 0x28
		::MoleMole::LogicButtonInputType LogicButtonType; // 0x2C
		::HPBIMDNDPLK SettingContentType; // 0x30
		::MoleMole::LogicButtonInputType ComboLogicButtonType; // 0x34
		::System::Boolean IsLocked; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
