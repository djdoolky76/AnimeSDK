#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDAHILBOJEC.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniUIGame::BezierCurve { class UIMissionPointWidgetController; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CONTAINSMISSIONPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x135ADAF0)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x135ADAE0)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int UIInLevelBezierCurveGameWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 83643;

	class UIInLevelBezierCurveGameWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::HDAHILBOJEC type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsMissionPoint_b__0(::MoleMole::MiniUIGame::BezierCurve::UIMissionPointWidgetController* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniUIGame::BezierCurve::UIMissionPointWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CONTAINSMISSIONPOINT_B__0_OFFSET))(this, x);
		}
	};
}
