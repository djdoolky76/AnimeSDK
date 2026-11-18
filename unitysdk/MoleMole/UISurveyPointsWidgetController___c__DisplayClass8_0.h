#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole { class UISurveyPointsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185D0950)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x185D0960)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x185D0E20)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x185D1070)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x185D1310)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__6_OFFSET UNITYSDK_OFFSET(0x185D1560)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x185D15E0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__8_OFFSET UNITYSDK_OFFSET(0x185D1870)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x185D0C00)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 77130;

	class UISurveyPointsWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UISurveyPointsWidgetController* __4__this; // 0x10
		::System::Action* __9__7; // 0x18
		::System::Action* __9__8; // 0x20
		::System::Action* __9__6; // 0x28
		::System::Single minRatio; // 0x30
		::System::Single prvRatio; // 0x34
		::System::Int32 levelNeedExp; // 0x38
		::System::Int32 curLevel; // 0x3C
		::System::Single realExpProgressDuration; // 0x40
		::System::Int32 lastExp; // 0x44
		::System::Single curRatio; // 0x48
		::System::Int32 currentAbyssPoint; // 0x4C
		::System::Single timer; // 0x50
		::System::ValueTuple_3<::System::Boolean, ::System::Int32, ::System::Int32> progressData; // 0x54
		::System::Byte _padding0[0x4];
		::System::Boolean isMaxLevel; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__6_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__7_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__8_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
