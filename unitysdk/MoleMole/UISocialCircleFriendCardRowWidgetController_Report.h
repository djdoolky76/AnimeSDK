#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISocialCircleFriendCardRowWidgetController.h"

#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_PMPEDAPNPDP_OFFSET UNITYSDK_OFFSET(0x19C8A1F0)
#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_PROCESSBYOPENPAGE_OFFSET UNITYSDK_OFFSET(0x19C89C50)
#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8A1C0)
#define MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT___BASE_PROCESSBYOPENPAGE_OFFSET UNITYSDK_OFFSET(0x19C8A1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleFriendCardRowWidgetController_Report_TypeDefinitionIndex = 84392;

	class UISocialCircleFriendCardRowWidgetController_Report : public ::MoleMole::UISocialCircleFriendCardRowWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT__CTOR_OFFSET))(this);
		}

		::System::Void ProcessByOpenPage(::System::Boolean& showPlatformInfoOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_PROCESSBYOPENPAGE_OFFSET))(this, showPlatformInfoOnly);
		}

		::System::Void __base_ProcessByOpenPage(::System::Boolean& P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT___BASE_PROCESSBYOPENPAGE_OFFSET))(this, P0);
		}

		::System::Void PMPEDAPNPDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEFRIENDCARDROWWIDGETCONTROLLER_REPORT_PMPEDAPNPDP_OFFSET))(this);
		}
	};
}
