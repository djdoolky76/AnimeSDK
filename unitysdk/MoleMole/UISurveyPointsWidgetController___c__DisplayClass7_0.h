#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKNANPCGMLK;
class GMBDKAPICHA;
namespace MoleMole { class UISurveyPointsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185CECC0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x185CECD0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__6_OFFSET UNITYSDK_OFFSET(0x185CF140)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x185CEF20)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 77133;

	class UISurveyPointsWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::DKNANPCGMLK* viewdata; // 0x10
		::System::Action* __9__6; // 0x18
		::MoleMole::UISurveyPointsWidgetController* __4__this; // 0x20
		::GMBDKAPICHA* data; // 0x28
		::System::Single timer; // 0x30
		::System::Int32 newLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshView_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__6_OFFSET))(this);
		}

		::System::Void _RefreshView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
