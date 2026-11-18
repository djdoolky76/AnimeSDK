#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultV2_TeamCoop_PageController.h"

#define MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER_HPLEIBEGIEJ_OFFSET UNITYSDK_OFFSET(0x19399410)
#define MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER_REFRESHSPINFO_OFFSET UNITYSDK_OFFSET(0x193991D0)
#define MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19399A30)
#define MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER___BASE_REFRESHSPINFO_OFFSET UNITYSDK_OFFSET(0x19399AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_VR_TeamCoop_PageController_TypeDefinitionIndex = 41992;

	class UILevelResultV2_VR_TeamCoop_PageController : public ::MoleMole::UILevelResultV2_TeamCoop_PageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshSpInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER_REFRESHSPINFO_OFFSET))(this);
		}

		::System::Void __base_RefreshSpInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER___BASE_REFRESHSPINFO_OFFSET))(this);
		}

		::System::Void HPLEIBEGIEJ(::System::Int32 NACGJJKHEJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_VR_TEAMCOOP_PAGECONTROLLER_HPLEIBEGIEJ_OFFSET))(this, NACGJJKHEJE);
		}
	};
}
