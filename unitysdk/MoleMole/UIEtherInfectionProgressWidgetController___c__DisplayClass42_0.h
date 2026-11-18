#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEtherInfectionProgressWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIETHERINFECTIONPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1985BD70)
#define MOLEMOLE_UIETHERINFECTIONPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS42_0__SETVISIBLE_B__0_OFFSET UNITYSDK_OFFSET(0x1985BD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIEtherInfectionProgressWidgetController___c__DisplayClass42_0_TypeDefinitionIndex = 72537;

	class UIEtherInfectionProgressWidgetController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UIEtherInfectionProgressWidgetController* __4__this; // 0x10
		::System::Action* onTweenEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHERINFECTIONPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetVisible_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHERINFECTIONPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS42_0__SETVISIBLE_B__0_OFFSET))(this);
		}
	};
}
