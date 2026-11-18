#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDBPOGPNCBP;
class CALIGLPABNP;
namespace MoleMole { class UIActivityBossChallengeHardInfoWidgetController; }

#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BECA90)
#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET UNITYSDK_OFFSET(0x14BECAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBossChallengeHardInfoWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 85764;

	class UIActivityBossChallengeHardInfoWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::CALIGLPABNP* bossMonster; // 0x10
		::MoleMole::UIActivityBossChallengeHardInfoWidgetController* __4__this; // 0x18
		::BDBPOGPNCBP* layerInfo; // 0x20
		::System::Int32 roomID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossCard_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET))(this);
		}
	};
}
