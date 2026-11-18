#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEHLBFOILMA;
namespace MoleMole { class UIABInLevelBangbooInfoWidgetController; }

#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D20A60)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__OPENBANGBOOINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18D20A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooAutoBattleInLevelPageController___c__DisplayClass100_0_TypeDefinitionIndex = 74774;

	class UIBangBooAutoBattleInLevelPageController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::JEHLBFOILMA* slotData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenBangBooInfo_b__0(::MoleMole::UIABInLevelBangbooInfoWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelBangbooInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__OPENBANGBOOINFO_B__0_OFFSET))(this, widget);
		}
	};
}
