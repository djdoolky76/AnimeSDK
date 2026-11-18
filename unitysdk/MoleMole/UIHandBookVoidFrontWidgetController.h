#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ALLHKDOEKBK;
class GCDJKECOEAA;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_DKDFBBEALNK_OFFSET UNITYSDK_OFFSET(0x187C3220)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_DMPGPPKDIFO_OFFSET UNITYSDK_OFFSET(0x187C32A0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_HKCOIIGOLCF_OFFSET UNITYSDK_OFFSET(0x187C3370)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187C2E70)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187C2F00)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187C2470)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187C28D0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x187C29B0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187C2F80)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187C2FE0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187C3070)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187C3100)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187C3190)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookVoidFrontWidgetController_TypeDefinitionIndex = 44572;

	class UIHandBookVoidFrontWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GCDJKECOEAA* _view; // 0x2C8
		::ALLHKDOEKBK* MCENIPEHPPO; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::ScrollViewItemWidgetController* DKDFBBEALNK(::System::Func_1<::MoleMole::UIControlReference*>* JOLDOMEIKEF)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_DKDFBBEALNK_OFFSET))(this, JOLDOMEIKEF);
		}

		::System::Void DMPGPPKDIFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_DMPGPPKDIFO_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void HKCOIIGOLCF(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_HKCOIIGOLCF_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
