#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class KAEAIMHJJJA;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19672FC0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19672FD0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196730B0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19673060)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19673120)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19673130)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196731C0)
#define MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196731D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingalMoviePageController_TypeDefinitionIndex = 63083;

	class UICinemaSingalMoviePageController : public ::MoleMole::UIWindowController
	{
	public:
		::KAEAIMHJJJA* _view; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGALMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
