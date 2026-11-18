#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseDayTabWidgetController_State.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class KEIIDJNOFOH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11361B60)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11361BF0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11361A90)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11361AF0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x11361C70)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0x11362170)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x11362120)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x113620C0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x11361F60)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11362820)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11362880)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11362910)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x113629A0)
#define MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11362A30)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseDayTabWidgetController_TypeDefinitionIndex = 75350;

	class UITowerDefenseDayTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KEIIDJNOFOH* _view; // 0x2C8
		::MoleMole::UITowerDefenseDayTabWidgetController_State JKBLDFBGBPK; // 0x2D0
		::System::Boolean PAKOBHFGLEE; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshEntry(::System::Int32 entryid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET))(this, entryid);
		}

		::System::Void SetState(::MoleMole::UITowerDefenseDayTabWidgetController_State state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseDayTabWidgetController_State))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETSTATE_OFFSET))(this, state);
		}

		::System::Void SetLockState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETLOCKSTATE_OFFSET))(this);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_UPDATESTATE_OFFSET))(this);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEDAYTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
