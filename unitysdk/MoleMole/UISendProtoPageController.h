#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UISENDPROTOPAGECONTROLLER_CLOSEMAINCITYSTOREPAGE_OFFSET UNITYSDK_OFFSET(0x14812EB0)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14812E10)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14812E20)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14812F30)
#define MOLEMOLE_UISENDPROTOPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14812F40)

namespace MoleMole
{
	inline static constexpr unsigned int UISendProtoPageController_TypeDefinitionIndex = 39442;

	class UISendProtoPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void CloseMainCityStorePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER_CLOSEMAINCITYSTOREPAGE_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISENDPROTOPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
