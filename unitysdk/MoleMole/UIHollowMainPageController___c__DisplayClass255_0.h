#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6EE50)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x18E6EE60)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x18E6EF00)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x18E6EF90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass255_0_TypeDefinitionIndex = 84632;

	class UIHollowMainPageController___c__DisplayClass255_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Action* __9__2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayOverloadAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _PlayOverloadAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _PlayOverloadAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS255_0__PLAYOVERLOADANIMATION_B__2_OFFSET))(this);
		}
	};
}
