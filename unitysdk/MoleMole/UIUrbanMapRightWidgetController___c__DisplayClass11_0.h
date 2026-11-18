#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;

#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__APPLYZENKOVITEMINFOTOREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x12F8E1A0)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F8E190)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 40788;

	class UIUrbanMapRightWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Int32 itemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyZenkovItemInfoToRewardItems_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__APPLYZENKOVITEMINFOTOREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
