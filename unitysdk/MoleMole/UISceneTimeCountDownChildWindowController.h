#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16900550)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16900560)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16900820)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16900960)
#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16900970)

namespace MoleMole
{
	inline static constexpr unsigned int UISceneTimeCountDownChildWindowController_TypeDefinitionIndex = 76023;

	class UISceneTimeCountDownChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::UInt32 INMHMLGFIIK; // 0x320
		::System::UInt32 FCMPFOAJJIB; // 0x324
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* KJHOIGLAFEA; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
