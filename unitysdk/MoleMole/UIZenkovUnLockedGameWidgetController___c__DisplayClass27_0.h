#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F748B0)
#define MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SHOWHITRESULT_B__0_OFFSET UNITYSDK_OFFSET(0x18F753C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovUnLockedGameWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 41670;

	class UIZenkovUnLockedGameWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* onAnimFinished; // 0x10
		::System::Int32 remaining; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowHitResult_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVUNLOCKEDGAMEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SHOWHITRESULT_B__0_OFFSET))(this);
		}
	};
}
