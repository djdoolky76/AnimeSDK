#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class MDBFGLJBFDL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace MoleMole { class UIGeneralIntimacyUpPopWindowController_Context; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ADDCONTEXT_OFFSET UNITYSDK_OFFSET(0x17599620)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_DDFNICJNMNP_OFFSET UNITYSDK_OFFSET(0x17599B60)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x17599090)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17599080)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_NNFEKKKGOGG_OFFSET UNITYSDK_OFFSET(0x17599D00)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175993F0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175995B0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175990A0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPENINNER_OFFSET UNITYSDK_OFFSET(0x17599340)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175992C0)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x17599840)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17599480)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17599980)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17599990)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17599A20)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17599A30)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17599A40)
#define MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17599AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralIntimacyUpPopWindowController_TypeDefinitionIndex = 47180;

	class UIGeneralIntimacyUpPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::MDBFGLJBFDL* _view; // 0x320
		::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* DAAAEJDBNFI; // 0x328
		::MoleMole::UIGeneralIntimacyChangeWidgetController* MNDMOHPJHLF; // 0x330
		::MoleMole::UIGeneralIntimacyChangeWidgetController* BCANJHAMHHM; // 0x338
		::MoleMole::UIGeneralIntimacyChangeWidgetController* EFCMGALNEEO; // 0x340
		::MoleMole::UIGeneralIntimacyChangeWidgetController* KEAFKDOOJJF; // 0x348
		::MoleMole::UIGeneralIntimacyChangeWidgetController* FGAFKGPAKMK; // 0x350
		::System::Collections::Generic::List_1<::System::Object*>* AKEHPDCANMA; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AddContext(::MoleMole::UIGeneralIntimacyUpPopWindowController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ADDCONTEXT_OFFSET))(this, context);
		}

		::System::Void OnUIOpenInner(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_ONUIOPENINNER_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void NNFEKKKGOGG(::MoleMole::UIGeneralIntimacyChangeWidgetController* MNOMCCLBJAO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralIntimacyChangeWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_NNFEKKKGOGG_OFFSET))(this, MNOMCCLBJAO);
		}

		::MoleMole::UIGeneralIntimacyChangeWidgetController* DDFNICJNMNP()
		{
			return ((::MoleMole::UIGeneralIntimacyChangeWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINTIMACYUPPOPWINDOWCONTROLLER_DDFNICJNMNP_OFFSET))(this);
		}
	};
}
