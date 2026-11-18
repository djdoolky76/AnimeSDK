#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGALFHMPJLF;

#define MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A271D50)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETGENERALQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1A271D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTodoListItemWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 58513;

	class UIGoldMiningDayTodoListItemWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Int32 questID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetGeneralQuest_b__0(::AGALFHMPJLF* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGALFHMPJLF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SETGENERALQUEST_B__0_OFFSET))(this, x);
		}
	};
}
