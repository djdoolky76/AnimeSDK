#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29AB40)
#define MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__MATCHFUNCCOLLECTED_B__0_OFFSET UNITYSDK_OFFSET(0x1A29AB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowWeaponCollectWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 83052;

	class UIHollowWeaponCollectWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* arg1; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _MatchFuncCollected_b__0(::HGAJKHIMKJP* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS8_0__MATCHFUNCCOLLECTED_B__0_OFFSET))(this, relic);
		}
	};
}
