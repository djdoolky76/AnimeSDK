#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDMJEIMLMCA;
namespace MoleMole { class UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105656C0)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHPROGRESSBARITEMS_G__CONTAINSCURLEVELQUEST_0_OFFSET UNITYSDK_OFFSET(0x105656D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 93218;

	class UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::LDMJEIMLMCA* partner; // 0x10
		::MoleMole::UIWorkBenchTrustDegreeDetailsCardBaseInfoWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshProgressBarItems_g__ContainsCurLevelQuest_0(::System::Int32 level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEDETAILSCARDBASEINFOWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHPROGRESSBARITEMS_G__CONTAINSCURLEVELQUEST_0_OFFSET))(this, level);
		}
	};
}
