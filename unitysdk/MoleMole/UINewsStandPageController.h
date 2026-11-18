#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class LBDEEJHBFNI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStandChildWindowController; }
namespace System { class EventArgs; }

#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ABEFMDKLFFM_OFFSET UNITYSDK_OFFSET(0x18EBC180)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_HGKOKCDHFCF_OFFSET UNITYSDK_OFFSET(0x18EBC3F0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x18EBC340)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EBB840)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EBBF10)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EBB8D0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18EBBE70)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SHOWCONSOLEONBUTTON_OFFSET UNITYSDK_OFFSET(0x18EBBF80)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBC020)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EBC030)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EBC0C0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EBC0D0)
#define MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18EBC0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPageController_TypeDefinitionIndex = 76064;

	class UINewsStandPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* LIGGLDOEOLH; // 0x0
		::LBDEEJHBFNI* _view; // 0x330
		::MoleMole::UINewsStandChildWindowController* MFPJJJDDCOA; // 0x338
		::System::Boolean CPENEGOLKEF; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowConsoleOnButton(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_SHOWCONSOLEONBUTTON_OFFSET))(this, show);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void ABEFMDKLFFM(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ABEFMDKLFFM_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void ILBPOJOHJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_ILBPOJOHJPE_OFFSET))(this);
		}

		::System::Void HGKOKCDHFCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPAGECONTROLLER_HGKOKCDHFCF_OFFSET))(this);
		}
	};
}
