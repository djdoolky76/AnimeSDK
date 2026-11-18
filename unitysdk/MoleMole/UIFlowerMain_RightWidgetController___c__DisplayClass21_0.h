#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PPGKAHKNJIP;
namespace MoleMole { class UIFlowerMainListWidgetController_Data; }
namespace MoleMole { class UIFlowerMain_RightWidgetController; }

#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189317C0)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__0_OFFSET UNITYSDK_OFFSET(0x189317D0)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__1_OFFSET UNITYSDK_OFFSET(0x18931980)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_RightWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 46869;

	class UIFlowerMain_RightWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFlowerMain_RightWidgetController* __4__this; // 0x10
		::PPGKAHKNJIP* currentSelectFlowerFeatureData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshScrollViewData_b__0(::PPGKAHKNJIP* flowerData)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPGKAHKNJIP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__0_OFFSET))(this, flowerData);
		}

		::MoleMole::UIFlowerMainListWidgetController_Data* _RefreshScrollViewData_b__1(::PPGKAHKNJIP* flowerData)
		{
			return ((::MoleMole::UIFlowerMainListWidgetController_Data*(*)(::PVOID, ::PPGKAHKNJIP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS21_0__REFRESHSCROLLVIEWDATA_B__1_OFFSET))(this, flowerData);
		}
	};
}
