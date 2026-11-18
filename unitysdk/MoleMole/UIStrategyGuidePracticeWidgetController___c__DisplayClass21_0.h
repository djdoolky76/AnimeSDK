#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHIKNHGPAMH;
class ALDOKCCIFNB;

#define MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182671E0)
#define MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONPRACTICEBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x182671F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePracticeWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 75601;

	class UIStrategyGuidePracticeWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::AHIKNHGPAMH* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPracticeBtnClick_b__0(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPRACTICEWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONPRACTICEBTNCLICK_B__0_OFFSET))(this, data);
		}
	};
}
