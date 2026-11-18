#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS299_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176A4F00)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS299_0__SHOWPAGEUISTARTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x176A4F10)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS299_0__SHOWPAGEUISTARTANIM_B__1_OFFSET UNITYSDK_OFFSET(0x176A4FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass299_0_TypeDefinitionIndex = 84609;

	class UIHollowMainPageController___c__DisplayClass299_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::UnityEngine::Animation* anim; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS299_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPageUiStartAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS299_0__SHOWPAGEUISTARTANIM_B__0_OFFSET))(this);
		}

		::System::Void _ShowPageUiStartAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS299_0__SHOWPAGEUISTARTANIM_B__1_OFFSET))(this);
		}
	};
}
