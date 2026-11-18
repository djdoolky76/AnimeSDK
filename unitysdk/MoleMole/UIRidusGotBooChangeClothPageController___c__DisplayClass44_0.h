#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRidusGotBooChangeClothPageController_CurSuitLevel.h"
#include "unitysdk/System/Object.h"

class CLGEOOJGIMO;
namespace MoleMole { class UIRidusGotBooChangeClothPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CHANGECLOTHING_B__0_OFFSET UNITYSDK_OFFSET(0x147FF030)
#define MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147FF020)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooChangeClothPageController___c__DisplayClass44_0_TypeDefinitionIndex = 62996;

	class UIRidusGotBooChangeClothPageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::CLGEOOJGIMO* config; // 0x10
		::MoleMole::UIRidusGotBooChangeClothPageController* __4__this; // 0x18
		::MoleMole::UIRidusGotBooChangeClothPageController_CurSuitLevel curSuitLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeClothing_b__0(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOCHANGECLOTHPAGECONTROLLER___C__DISPLAYCLASS44_0__CHANGECLOTHING_B__0_OFFSET))(this, _);
		}
	};
}
