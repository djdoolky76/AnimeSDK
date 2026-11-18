#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FDJDJKFDACG.h"

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS113_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167B5500)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS113_0__RESETSERVERRECOMMENDSUITFILTERSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x167B5510)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass113_0_TypeDefinitionIndex = 40814;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass113_0 : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Int32> suitId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS113_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetServerRecommendSuitFilterState_b__0(::FDJDJKFDACG s)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDJDJKFDACG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS113_0__RESETSERVERRECOMMENDSUITFILTERSTATE_B__0_OFFSET))(this, s);
		}
	};
}
