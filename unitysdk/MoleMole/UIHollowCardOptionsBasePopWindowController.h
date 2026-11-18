#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIHOLLOWCARDOPTIONSBASEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18397D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsBasePopWindowController_TypeDefinitionIndex = 63214;

	class UIHollowCardOptionsBasePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSBASEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
