#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFBKIPAPHD;
namespace MoleMole { class UIFlipCardGameMainPageController; }

#define MOLEMOLE_UIFLIPCARDGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19866B80)
#define MOLEMOLE_UIFLIPCARDGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS27_0__FLIPCARDSUCCESSHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x19866B90)
#define MOLEMOLE_UIFLIPCARDGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS27_0__FLIPCARDSUCCESSHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x19866C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameMainPageController___c__DisplayClass27_0_TypeDefinitionIndex = 73524;

	class UIFlipCardGameMainPageController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::CHFBKIPAPHD* flipCardInfo; // 0x10
		::MoleMole::UIFlipCardGameMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _FlipCardSuccessHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS27_0__FLIPCARDSUCCESSHANDLE_B__0_OFFSET))(this);
		}

		::System::Void _FlipCardSuccessHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS27_0__FLIPCARDSUCCESSHANDLE_B__1_OFFSET))(this);
		}
	};
}
