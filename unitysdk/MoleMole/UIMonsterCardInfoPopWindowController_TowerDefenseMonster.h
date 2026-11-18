#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController_Monster.h"

class HFFMEGPMJNE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1796D050)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1796D0E0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1796D150)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1796D160)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1796D170)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_TowerDefenseMonster_TypeDefinitionIndex = 47692;

	class UIMonsterCardInfoPopWindowController_TowerDefenseMonster : public ::MoleMole::UIMonsterCardInfoPopWindowController_Monster
	{
	public:
		::HFFMEGPMJNE* _view; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_TOWERDEFENSEMONSTER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
