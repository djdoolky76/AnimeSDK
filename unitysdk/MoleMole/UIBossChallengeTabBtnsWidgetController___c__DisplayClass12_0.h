#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGGPPLICEA.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossChallengeTabBtnsWidgetController; }

#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19193430)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHSELECTED_B__0_OFFSET UNITYSDK_OFFSET(0x19193440)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTabBtnsWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 38431;

	class UIBossChallengeTabBtnsWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBossChallengeTabBtnsWidgetController* __4__this; // 0x10
		::JGGGPPLICEA current; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSelected_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHSELECTED_B__0_OFFSET))(this);
		}
	};
}
