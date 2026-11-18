#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTPERSONALWIDGETCONTROLLER___C__DISPLAYCLASS6_0__BINDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x182EB150)
#define MOLEMOLE_UIINTERKNOTPERSONALWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182EB140)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPersonalWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 42104;

	class UIInterKnotPersonalWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPERSONALWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPERSONALWIDGETCONTROLLER___C__DISPLAYCLASS6_0__BINDCALLBACK_B__0_OFFSET))(this);
		}
	};
}
