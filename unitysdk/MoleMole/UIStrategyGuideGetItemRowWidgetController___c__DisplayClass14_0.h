#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHIKNHGPAMH;
class ALDOKCCIFNB;

#define MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8BE10)
#define MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONSPECIALTRAININGGETBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x19C8BE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideGetItemRowWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 76242;

	class UIStrategyGuideGetItemRowWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::AHIKNHGPAMH* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSpecialTrainingGetBtnClick_b__0(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEGETITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONSPECIALTRAININGGETBTNCLICK_B__0_OFFSET))(this, data);
		}
	};
}
