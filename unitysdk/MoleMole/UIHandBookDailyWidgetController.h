#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ALLHKDOEKBK;
class CBBDJHOCLPH;
class EIGJEBNOGLC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ACHIPEMGJJD_OFFSET UNITYSDK_OFFSET(0x199D5F40)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_CJOGIECILHO_OFFSET UNITYSDK_OFFSET(0x199D55D0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_EGAEGENKNFP_OFFSET UNITYSDK_OFFSET(0x199D5F20)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199D5A50)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x199D53F0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199D5AE0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199D4DA0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199D50E0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199D5B60)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199D5C40)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x199D5CD0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199D5D70)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199D5E00)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199D5E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController_TypeDefinitionIndex = 39942;

	class UIHandBookDailyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::ALLHKDOEKBK* MCENIPEHPPO; // 0x2C8
		::CBBDJHOCLPH* _view; // 0x2D0
		::System::Collections::Generic::List_1<::EIGJEBNOGLC*>* MAKGEBCAPPF; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EGAEGENKNFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_EGAEGENKNFP_OFFSET))(this);
		}

		::System::Void CJOGIECILHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_CJOGIECILHO_OFFSET))(this);
		}

		::System::Void ACHIPEMGJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER_ACHIPEMGJJD_OFFSET))(this);
		}
	};
}
