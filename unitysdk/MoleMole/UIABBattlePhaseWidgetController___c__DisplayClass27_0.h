#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMPEGMEDAHH;
namespace MoleMole { class UIABBattlePhaseWidgetController; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E71D0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHSTARTTIPSBASEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1C0E71E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 87228;

	class UIABBattlePhaseWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABBattlePhaseWidgetController* __4__this; // 0x10
		::System::UInt32 localBattleId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshStartTipsBaseInfo_b__0(::EMPEGMEDAHH* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMPEGMEDAHH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHSTARTTIPSBASEINFO_B__0_OFFSET))(this, x);
		}
	};
}
