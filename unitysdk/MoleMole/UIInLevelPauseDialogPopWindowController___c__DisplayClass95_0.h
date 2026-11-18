#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEKNEEMAHBC;
class PJHKDJEGJOG;
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196D7200)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS95_0__SHOWQUITBATTLEDIALOG_G__ONCLICKOK_0_OFFSET UNITYSDK_OFFSET(0x196D7210)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass95_0_TypeDefinitionIndex = 86249;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::PJHKDJEGJOG* context; // 0x10
		::System::Action* onConfirm; // 0x18
		::GEKNEEMAHBC* rawContext; // 0x20
		::MoleMole::UIInLevelPauseDialogPopWindowController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQuitBattleDialog_g__OnClickOk_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS95_0__SHOWQUITBATTLEDIALOG_G__ONCLICKOK_0_OFFSET))(this);
		}
	};
}
