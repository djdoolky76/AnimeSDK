#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class MONHMEBHJHF;
class NCNNBELBMMC;
namespace MoleMole { class ActivityOVAMainBattleContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_JBCENOBPOIC_OFFSET UNITYSDK_OFFSET(0x189A4D80)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_KEAJFFCNMPF_OFFSET UNITYSDK_OFFSET(0x189A4DE0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_LENGEJFHBPL_OFFSET UNITYSDK_OFFSET(0x189A4640)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189A49D0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189A4A60)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189A4420)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189A4550)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189A4AE0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189A4B40)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189A4BD0)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189A4C60)
#define MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189A4CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVAMainBattleWidgetController_TypeDefinitionIndex = 45740;

	class UIActivityOVAMainBattleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MONHMEBHJHF* _view; // 0x2C8
		::MoleMole::ActivityOVAMainBattleContext* AAOCANGHBDG; // 0x2D0
		::NCNNBELBMMC* CICFDGHGPKJ; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void LENGEJFHBPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_LENGEJFHBPL_OFFSET))(this);
		}

		::System::Void JBCENOBPOIC(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_JBCENOBPOIC_OFFSET))(this, MNDIBLLFAJI);
		}

		::MoleMole::ScrollViewItemWidgetController* KEAJFFCNMPF(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVAMAINBATTLEWIDGETCONTROLLER_KEAJFFCNMPF_OFFSET))(this, MNDIBLLFAJI);
		}
	};
}
