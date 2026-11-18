#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GKIDGPFFDOJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABBuddyGetPopWindowController_Context; }
namespace MoleMole { class UIRABDepositoryElementTextTagRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16491050)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_IHPFAEFEHGD_OFFSET UNITYSDK_OFFSET(0x16491D90)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16491960)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164919F0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16491060)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164910B0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_PDFFFEMDCGB_OFFSET UNITYSDK_OFFSET(0x16491D80)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x164911A0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16491A90)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16491B20)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16491BB0)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16491C40)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16491C50)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16491C60)
#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16491CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuddyGetPopWindowController_TypeDefinitionIndex = 86181;

	class UIRABBuddyGetPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::GKIDGPFFDOJ* _view; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIRABDepositoryElementTextTagRowWidgetController*>* KGKPENAINBI; // 0x328
		::MoleMole::UIRABBuddyGetPopWindowController_Context* DAAAEJDBNFI; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void PDFFFEMDCGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_PDFFFEMDCGB_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void IHPFAEFEHGD(::System::Collections::Generic::List_1<::System::Int32>* EJPOLEOICOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_IHPFAEFEHGD_OFFSET))(this, EJPOLEOICOK);
		}
	};
}
