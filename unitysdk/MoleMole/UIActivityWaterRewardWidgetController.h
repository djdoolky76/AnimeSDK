#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIActivityWaterRewardWidgetController_ERewardType.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0x199132F0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0x19913390)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GNMCEKDGAFL_OFFSET UNITYSDK_OFFSET(0x19913640)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_JUMP_OFFSET UNITYSDK_OFFSET(0x199130E0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x199130A0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_SETTASK_OFFSET UNITYSDK_OFFSET(0x19912EA0)
#define MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19913630)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterRewardWidgetController_TypeDefinitionIndex = 72667;

	class UIActivityWaterRewardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::AOJKLCGGPAK* _task; // 0x2F8
		::CJIEIHEDMME* _rootActivityData; // 0x300
		::MoleMole::UIActivityWaterRewardWidgetController_ERewardType _type; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTask(::AOJKLCGGPAK* task, ::CJIEIHEDMME* rootActivityData)
		{
			return ((::System::Void(*)(::PVOID, ::AOJKLCGGPAK*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_SETTASK_OFFSET))(this, task, rootActivityData);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void Jump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_JUMP_OFFSET))(this);
		}

		::System::Boolean CanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_CANGETREWARD_OFFSET))(this);
		}

		::System::Void GetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GETREWARD_OFFSET))(this);
		}

		::System::Void GNMCEKDGAFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERREWARDWIDGETCONTROLLER_GNMCEKDGAFL_OFFSET))(this);
		}
	};
}
