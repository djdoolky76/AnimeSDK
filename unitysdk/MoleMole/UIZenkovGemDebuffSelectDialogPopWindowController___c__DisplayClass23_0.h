#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovGemDebuffSelectDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3F970)
#define MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__PLAYREMINDERANIM_B__0_OFFSET UNITYSDK_OFFSET(0x13B3F980)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffSelectDialogPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 62288;

	class UIZenkovGemDebuffSelectDialogPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovGemDebuffSelectDialogPopWindowController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayReminderAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFSELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__PLAYREMINDERANIM_B__0_OFFSET))(this);
		}
	};
}
