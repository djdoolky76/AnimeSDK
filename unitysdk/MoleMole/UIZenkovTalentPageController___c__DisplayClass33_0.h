#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIZenkovTalentPageController; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS33_0__APPLYTIPSOPENFOCUSINTENT_B__0_OFFSET UNITYSDK_OFFSET(0x18F6EAC0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6EAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController___c__DisplayClass33_0_TypeDefinitionIndex = 43036;

	class UIZenkovTalentPageController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTalentPageController* __4__this; // 0x10
		::MoleMole::UIGeneralDynamicTipsPopWindowController* itemInfoPopup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyTipsOpenFocusIntent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS33_0__APPLYTIPSOPENFOCUSINTENT_B__0_OFFSET))(this);
		}
	};
}
