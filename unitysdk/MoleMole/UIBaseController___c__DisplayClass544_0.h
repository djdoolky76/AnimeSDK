#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS544_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19192090)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS544_0__PLAYFADEINANIM_B__0_OFFSET UNITYSDK_OFFSET(0x191920A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass544_0_TypeDefinitionIndex = 55810;

	class UIBaseController___c__DisplayClass544_0 : public ::System::Object
	{
	public:
		::System::String* fadeInAnimName; // 0x10
		::MoleMole::UIBaseController* __4__this; // 0x18
		::System::Boolean playToEnd; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single speed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS544_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeInAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS544_0__PLAYFADEINANIM_B__0_OFFSET))(this);
		}
	};
}
