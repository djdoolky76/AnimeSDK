#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS20_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15D15DE0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS20_2__SETZENKOVSTARTTIMER_B__0_OFFSET UNITYSDK_OFFSET(0x15D15DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass20_2_TypeDefinitionIndex = 71122;

	template <typename T1, typename T2>
	class UIMissionTipsRowWidgetController___c__DisplayClass20_2 : public ::System::Object
	{
	public:
		::System::String* colorHex; // 0x10
		::System::Object* CS___8__locals2; // 0x18
		::System::Int32 tipsId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS20_2__CTOR_OFFSET))(this);
		}

		::System::Void _SetZenkovStartTimer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS20_2__SETZENKOVSTARTTIMER_B__0_OFFSET))(this);
		}
	};
}
