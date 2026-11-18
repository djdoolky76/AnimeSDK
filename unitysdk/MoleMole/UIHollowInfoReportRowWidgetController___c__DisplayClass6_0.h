#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPDHILFCILB.h"

class NHOLNPHNFHO;
class NMJECHPNNLM_FDKIJCNKAAM;
namespace MoleMole { class UIHollowInfoReportRowWidgetController; }

#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A294740)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1A294750)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoReportRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 80256;

	class UIHollowInfoReportRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::NHOLNPHNFHO* report; // 0x10
		::MoleMole::UIHollowInfoReportRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::JPDHILFCILB _RefreshView_b__0(::NMJECHPNNLM_FDKIJCNKAAM* context)
		{
			return ((::JPDHILFCILB(*)(::PVOID, ::NMJECHPNNLM_FDKIJCNKAAM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET))(this, context);
		}
	};
}
