#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDBPOGPNCBP;
class CALIGLPABNP;
namespace MoleMole { class UIActivityBossChallengeHardInfoCompWidgetController; }

#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19820750)
#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET UNITYSDK_OFFSET(0x19820760)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBossChallengeHardInfoCompWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 76567;

	class UIActivityBossChallengeHardInfoCompWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::CALIGLPABNP* bossMonster; // 0x10
		::MoleMole::UIActivityBossChallengeHardInfoCompWidgetController* __4__this; // 0x18
		::BDBPOGPNCBP* layerInfo; // 0x20
		::System::Int32 roomID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossCard_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET))(this);
		}
	};
}
