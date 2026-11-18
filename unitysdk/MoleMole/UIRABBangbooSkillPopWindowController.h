#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class MCJEAKOHKJH;
class NHANGNFLDPA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_DHNJKIIKEHJ_OFFSET UNITYSDK_OFFSET(0x186F2860)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x186F1F80)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186F2610)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186F26A0)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186F1F90)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186F2100)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186F2710)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186F2720)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186F27B0)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186F27C0)
#define MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186F27D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBangbooSkillPopWindowController_TypeDefinitionIndex = 74819;

	class UIRABBangbooSkillPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* IHGDIIOPCGF; // 0x0
		::NHANGNFLDPA* _view; // 0x320
		::System::Collections::Generic::List_1<::MCJEAKOHKJH*>* FHAEOEMDIGJ; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DHNJKIIKEHJ(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBANGBOOSKILLPOPWINDOWCONTROLLER_DHNJKIIKEHJ_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
