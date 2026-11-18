#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBEILOBJCMH;

#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19169BA0)
#define MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SETTITLE_B__0_OFFSET UNITYSDK_OFFSET(0x19169BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeAchievementPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 81028;

	class UIArcadeAchievementPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::IBEILOBJCMH* titleData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetTitle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEACHIEVEMENTPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SETTITLE_B__0_OFFSET))(this);
		}
	};
}
