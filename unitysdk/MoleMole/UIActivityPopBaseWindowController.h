#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1702F510)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1702E8E0)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1702FC50)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170317F0)
#define MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17031800)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPopBaseWindowController_TypeDefinitionIndex = 45669;

	class UIActivityPopBaseWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPBASEWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
