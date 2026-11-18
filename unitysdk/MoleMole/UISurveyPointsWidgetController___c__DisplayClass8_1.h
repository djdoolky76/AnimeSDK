#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x185D1B50)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__REFRESHCONTROBUTEVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x185D1B60)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass8_1_TypeDefinitionIndex = 77132;

	template <typename T>
	class UISurveyPointsWidgetController___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::UI::Extension::UIDynamicNumberLabel* dynamicLabel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__REFRESHCONTROBUTEVIEW_B__5_OFFSET))(this);
		}
	};
}
