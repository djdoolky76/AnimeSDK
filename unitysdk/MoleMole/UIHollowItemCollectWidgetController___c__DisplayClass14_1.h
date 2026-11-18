#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowItemCollectEffectWidgetController; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176A3990)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_1__SHOWEFFECTATPOS_B__1_OFFSET UNITYSDK_OFFSET(0x176A39A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_1__SHOWEFFECTATPOS_B__2_OFFSET UNITYSDK_OFFSET(0x176A3AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController___c__DisplayClass14_1_TypeDefinitionIndex = 67243;

	template <typename T>
	class UIHollowItemCollectWidgetController___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::UIHollowItemCollectEffectWidgetController* effect; // 0x18
		::System::Int32 addNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEffectAtPos_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_1__SHOWEFFECTATPOS_B__1_OFFSET))(this);
		}

		::System::Void _ShowEffectAtPos_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS14_1__SHOWEFFECTATPOS_B__2_OFFSET))(this);
		}
	};
}
