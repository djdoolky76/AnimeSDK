#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ALLHKDOEKBK;
class GCDJKECOEAA;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_CEPKIPFGGOA_OFFSET UNITYSDK_OFFSET(0x187C0200)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_DKDFBBEALNK_OFFSET UNITYSDK_OFFSET(0x187C01E0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_MJNECICMKFF_OFFSET UNITYSDK_OFFSET(0x187C0160)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187BFDB0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187BFE40)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187BF820)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187BFC30)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x187BFD10)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187BFEC0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187BFF20)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187BFFB0)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187C0040)
#define MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187C00D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookCampIdleWidgetController_TypeDefinitionIndex = 67605;

	class UIHandBookCampIdleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GCDJKECOEAA* _view; // 0x2C8
		::ALLHKDOEKBK* MCENIPEHPPO; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::ScrollViewItemWidgetController* MJNECICMKFF(::System::Func_1<::MoleMole::UIControlReference*>* JOLDOMEIKEF)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_MJNECICMKFF_OFFSET))(this, JOLDOMEIKEF);
		}

		::System::Void DKDFBBEALNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_DKDFBBEALNK_OFFSET))(this);
		}

		::System::Void CEPKIPFGGOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_CEPKIPFGGOA_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCAMPIDLEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}
	};
}
