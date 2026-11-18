#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DKNANPCGMLK;
class OELKOJELCMA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISurveyPointsContext; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_EENNAFOJIGJ_OFFSET UNITYSDK_OFFSET(0x13B20130)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_NCPCPDBKOBH_OFFSET UNITYSDK_OFFSET(0x13B20120)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13B1DEA0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13B1DF30)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13B1DBF0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13B1DCF0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET UNITYSDK_OFFSET(0x13B1EF90)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13B1DFB0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1FE80)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13B1FEE0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13B1FF70)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13B20000)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13B20090)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController_TypeDefinitionIndex = 77129;

	class UISurveyPointsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single HANIIOCHPLN; // 0x0
		::OELKOJELCMA* _view; // 0x2C8
		::MoleMole::UISurveyPointsContext* DAAAEJDBNFI; // 0x2D0
		::System::Single DOHEFGGNFON; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::DKNANPCGMLK* viewdata)
		{
			return ((::System::Void(*)(::PVOID, ::DKNANPCGMLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, viewdata);
		}

		::System::Void RefreshControbuteView(::System::Int32 groupid, ::System::Int32 addPoint, ::System::Int32 currentPoint, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_REFRESHCONTROBUTEVIEW_OFFSET))(this, groupid, addPoint, currentPoint, duration);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void NCPCPDBKOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_NCPCPDBKOBH_OFFSET))(this);
		}

		::System::Void EENNAFOJIGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER_EENNAFOJIGJ_OFFSET))(this);
		}
	};
}
