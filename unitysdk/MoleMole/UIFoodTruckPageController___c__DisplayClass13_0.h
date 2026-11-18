#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MMCKPLNGLAK;
namespace MoleMole { class UIFoodTruckPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170912C0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__ONSTARFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x170912D0)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__ONSTARFADEINANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x17091720)
#define MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__ONSTARFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x170919E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckPageController___c__DisplayClass13_0_TypeDefinitionIndex = 61896;

	class UIFoodTruckPageController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFoodTruckPageController* __4__this; // 0x10
		::System::Action* __9__4; // 0x18
		::MMCKPLNGLAK* config; // 0x20
		::System::Int32 index; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStarFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__ONSTARFADEINANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _OnStarFadeInAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__ONSTARFADEINANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _OnStarFadeInAnimation_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKPAGECONTROLLER___C__DISPLAYCLASS13_0__ONSTARFADEINANIMATION_B__4_OFFSET))(this);
		}
	};
}
