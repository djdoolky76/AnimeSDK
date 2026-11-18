#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class BPNGLLLIMDC;
class MOBIKGIHCIC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_BCLBOGJFPAM_OFFSET UNITYSDK_OFFSET(0x19819080)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_CAKCECPOPPM_OFFSET UNITYSDK_OFFSET(0x198197B0)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19818B60)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONBKGHJELMM_OFFSET UNITYSDK_OFFSET(0x19819900)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19818B70)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198195F0)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19818C00)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19818F40)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19819660)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19819670)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19819700)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19819710)
#define MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19819720)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTaskPageController_TypeDefinitionIndex = 49838;

	class UIAbyssTaskPageController : public ::MoleMole::UIWindowController
	{
	public:
		::MOBIKGIHCIC* _view; // 0x320
		::BPNGLLLIMDC* PJIMHAAOKLF; // 0x328
		::System::Int32 DOPBOFHAFMK; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BCLBOGJFPAM(::System::EventArgs* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_BCLBOGJFPAM_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void CAKCECPOPPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_CAKCECPOPPM_OFFSET))(this);
		}

		::System::Void ONBKGHJELMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTASKPAGECONTROLLER_ONBKGHJELMM_OFFSET))(this);
		}
	};
}
