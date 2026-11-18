#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOLOHOHDDDB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEditBtnSmallWidgetController_Context; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB2EC0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__RESETBTNBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x14CB2ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 60653;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::HOLOHOHDDDB type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetBtnByType_b__0(::MoleMole::UIEditBtnSmallWidgetController_Context* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIEditBtnSmallWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__RESETBTNBYTYPE_B__0_OFFSET))(this, item);
		}
	};
}
