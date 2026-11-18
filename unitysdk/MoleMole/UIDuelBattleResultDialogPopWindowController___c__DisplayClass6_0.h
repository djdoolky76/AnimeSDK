#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDuelBattleResultDialogContext; }
namespace MoleMole { class UIDuelBattleResultDialogPopWindowController; }

#define MOLEMOLE_UIDUELBATTLERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15993970)
#define MOLEMOLE_UIDUELBATTLERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x15993980)
#define MOLEMOLE_UIDUELBATTLERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x159939E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleResultDialogPopWindowController___c__DisplayClass6_0_TypeDefinitionIndex = 80487;

	class UIDuelBattleResultDialogPopWindowController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDuelBattleResultDialogContext* context; // 0x10
		::MoleMole::UIDuelBattleResultDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLERESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS6_0__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
