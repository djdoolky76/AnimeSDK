#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLEBHDLPN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameUpgradeRowWidgetController; }

#define MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5FED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameUpgradeDialogPopWindowController_Summary_TypeDefinitionIndex = 95006;

	class UIBallGameUpgradeDialogPopWindowController_Summary : public ::System::Object
	{
	public:
		::IAJLEBHDLPN summary; // 0x10
		::MoleMole::UIBallGameUpgradeRowWidgetController* widget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEDIALOGPOPWINDOWCONTROLLER_SUMMARY__CTOR_OFFSET))(this);
		}
	};
}
