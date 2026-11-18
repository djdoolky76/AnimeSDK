#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;

#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__APPLYBANGKOVITEMINFOTOREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x12F8E150)
#define MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12F8E140)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightWidgetController___c__DisplayClass10_1_TypeDefinitionIndex = 40789;

	template <typename T>
	class UIUrbanMapRightWidgetController___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyBangkovItemInfoToRewardItems_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS10_1__APPLYBANGKOVITEMINFOTOREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
